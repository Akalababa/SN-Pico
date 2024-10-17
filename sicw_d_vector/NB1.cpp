#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <time.h>
#include <sys/time.h>
#include <algorithm>


#include "d3_NB.h"

static int y[n];
static int k = 0;
static bool finalResultPrinted = false;

double magma_wtime( void )
{
  struct timeval t;
  gettimeofday( &t, NULL );
  return t.tv_sec + t.tv_usec*1e-6;
}

void print_vect(int *x, int d1) {
    for (int i = 0; i < d1; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}

int find_value(int matrix[][2], int start, int end, int target) {
    // 线性查找，在 matrix 的 [start, end) 区间查找 target
    for (int i = start; i < end; i++) {
        if (matrix[i][0] == target) {
            return matrix[i][1];  // 找到目标，返回值
        }
    }
    return 0;  // 如果没找到，返回 0
}

int main() {
    double start_time, end_time;
    
    start_time = magma_wtime();
    
    
    while(true) {  
        // 查找下一个可以触发的变迁并更新 mu
        int fire = -1;
        for (int idx = 0; idx < n; idx++) {
            int tt = v_per[idx];
            y[tt] = INT_MAX;  // 初始化 y[tt] 为一个很大的值

            // 根据 bs 矩阵计算 y[tt]
            for (int i = tbs[tt]; i < (tt < n - 1 ? tbs[tt + 1] : KB); i++) {
                int pb = bs[i][0];  // 获取当前库所索引
                int wb = bs[i][1];  // 获取权重值

                int yij = (wb > 1) ? mu[pb] / (wb - 1) : (wb == 1) ? ((mu[pb] > 0) ? 0 : INT_MAX) : INT_MAX;
                y[tt] = std::min(y[tt], yij);   // 更新 y[tt]
            }
            if (y[tt] > 0) {
                fire = tt;  // 找到可触发的变迁
                int yy = y[fire];
                //printf("Triggering transition %d with y[%d] = %d\n", trigger_tt, trigger_tt, yy);  // 调试输出

                // 更新 mu 的值
                for (int i = 0; i < m; i++) {
					int b_value = find_value(bs, tbs[fire], (fire < n - 1 ? tbs[fire + 1] : KB), i);
                    int d_value = find_value(ds, tds[fire], (fire < n - 1 ? tds[fire + 1] : KD), i);
                    // 更新 mu 值
                    mu[i] = mu[i] - ((b_value > 1) ? yy * (b_value - 1) : 0) + yy * d_value;
                }
				
                break;  // 找到并处理了可触发的变迁，跳出循环
            }
        }

        // 如果没有可触发的变迁，结束循环
        if (fire == -1) {
            break;  // 找不到可触发的变迁，退出循环
        }

        k++;  // 计数触发的变迁次数
    }
	end_time = magma_wtime();
	
    // 输出最终结果
    printf("Final mu: ");
    print_vect(mu, m);
    printf("Final y: ");
    print_vect(y, n);
    printf("Total number of steps: %d\n", k);
    printf("Time taken: %f seconds\n", end_time - start_time);
    
    return 0;
}
