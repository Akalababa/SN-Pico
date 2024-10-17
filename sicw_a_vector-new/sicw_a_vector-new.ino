// SNM - Sleptsov Net Machine in Arduino IDE, optimized for Raspberry Pi Pico
static int dbg = 0; // debug mode if dbg > 0
volatile static int go = 1;
unsigned long startTime;
static bool finalResultPrinted = false; // 用于控制结果只输出一次

#include "d4_NB.h"

void setup() {
  Serial.begin(115200);
  delay(1000);
  
  startTime = micros(); // 记录开始时间
  
  if (dbg > 0) {
    Serial.print("SNM started at "); 
    Serial.println(startTime);
    Serial.println(" us\n");
  }
}

#define MOFF(i,j,d1,d2) ((d2)*(i)+(j))
#define MELT(x,i,j,d1,d2) (*((x)+MOFF(i,j,d1,d2)))

static int y[n];

void print_vect(int *x, int d1) {
  for (int i = 0; i < d1; i++) {
    Serial.print(x[i]);
    Serial.print(" ");
  }
  Serial.println("");
}

#define zmin(x, y) (((x) < (y)) ? (x) : (y))

static int k = 0; // 触发次数计数

void loop() {
  // 检查是否已经打印了结果，若已打印则直接退出，不再重复执行
  if (finalResultPrinted) {
    return; // 退出 loop，不再执行后续代码
  }

  int fire = -1;

  // 查找可触发的变迁
  for (int idx = 0; idx < n; idx++) {
    int tt = v_per[idx];
    y[tt] = INT_MAX;

    // 缓存 tbs 范围，减少计算
    int start_bs = tbs[tt];
    int end_bs = (tt < n - 1) ? tbs[tt + 1] : KB;

    for (int i = start_bs; i < end_bs; i++) {
      int pb = bs[i][0];  // 当前库所索引
      int wb = bs[i][1];  // 权重值

      // 优化 y[tt] 的计算逻辑
      int yij = (wb > 1) ? mu[pb] / (wb - 1) : (wb == 1 && mu[pb] > 0) ? 0 : INT_MAX;
      y[tt] = zmin(y[tt], yij); // 更新 y[tt]
    }

    if (y[tt] > 0) {
      fire = tt;
      int yy = y[fire];

      // 更新 mu 值
      int start_ds = tds[fire];
      int end_ds = (fire < n - 1) ? tds[fire + 1] : KD;

      for (int i = 0; i < m; i++) {
        // 使用局部变量缓存，减少 find_value 调用
        int b_value = 0;
        int d_value = 0;

        for (int x = start_bs; x < end_bs; x++) {
          if (bs[x][0] == i) {
            b_value = bs[x][1];
            break;
          }
        }

        for (int x = start_ds; x < end_ds; x++) {
          if (ds[x][0] == i) {
            d_value = ds[x][1];
            break;
          }
        }

        // 更新 mu 值
        mu[i] = mu[i] - ((b_value > 1) ? yy * (b_value - 1) : 0) + yy * d_value;
      }

      break; // 找到可触发变迁，跳出
    }
  }

  // 如果没有可触发的变迁，结束
  if (fire == -1) {
    // 结束后输出最终结果
    unsigned long endTime = micros();
    Serial.print("Final mu: ");
    print_vect(mu, m);
    Serial.print("Final y: ");
    print_vect(y, n);
    Serial.print("SNM started at ");
    Serial.print(startTime);
    Serial.print(" us and ended at ");
    Serial.print(endTime);
    Serial.println(" us");
    Serial.print("Total time is ");
    Serial.print(endTime - startTime);
    Serial.println(" us");
    Serial.print("Total number of steps: ");
    Serial.println(k);

    // 标志已经打印结果
    finalResultPrinted = true;
  } else {
    k++; // 增加触发次数计数
  }
}
