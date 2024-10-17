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
    // ���Բ��ң��� matrix �� [start, end) ������� target
    for (int i = start; i < end; i++) {
        if (matrix[i][0] == target) {
            return matrix[i][1];  // �ҵ�Ŀ�꣬����ֵ
        }
    }
    return 0;  // ���û�ҵ������� 0
}

int main() {
    double start_time, end_time;
    
    start_time = magma_wtime();
    
    
    while(true) {  
        // ������һ�����Դ����ı�Ǩ������ mu
        int fire = -1;
        for (int idx = 0; idx < n; idx++) {
            int tt = v_per[idx];
            y[tt] = INT_MAX;  // ��ʼ�� y[tt] Ϊһ���ܴ��ֵ

            // ���� bs ������� y[tt]
            for (int i = tbs[tt]; i < (tt < n - 1 ? tbs[tt + 1] : KB); i++) {
                int pb = bs[i][0];  // ��ȡ��ǰ��������
                int wb = bs[i][1];  // ��ȡȨ��ֵ

                int yij = (wb > 1) ? mu[pb] / (wb - 1) : (wb == 1) ? ((mu[pb] > 0) ? 0 : INT_MAX) : INT_MAX;
                y[tt] = std::min(y[tt], yij);   // ���� y[tt]
            }
            if (y[tt] > 0) {
                fire = tt;  // �ҵ��ɴ����ı�Ǩ
                int yy = y[fire];
                //printf("Triggering transition %d with y[%d] = %d\n", trigger_tt, trigger_tt, yy);  // �������

                // ���� mu ��ֵ
                for (int i = 0; i < m; i++) {
					int b_value = find_value(bs, tbs[fire], (fire < n - 1 ? tbs[fire + 1] : KB), i);
                    int d_value = find_value(ds, tds[fire], (fire < n - 1 ? tds[fire + 1] : KD), i);
                    // ���� mu ֵ
                    mu[i] = mu[i] - ((b_value > 1) ? yy * (b_value - 1) : 0) + yy * d_value;
                }
				
                break;  // �ҵ��������˿ɴ����ı�Ǩ������ѭ��
            }
        }

        // ���û�пɴ����ı�Ǩ������ѭ��
        if (fire == -1) {
            break;  // �Ҳ����ɴ����ı�Ǩ���˳�ѭ��
        }

        k++;  // ���������ı�Ǩ����
    }
	end_time = magma_wtime();
	
    // ������ս��
    printf("Final mu: ");
    print_vect(mu, m);
    printf("Final y: ");
    print_vect(y, n);
    printf("Total number of steps: %d\n", k);
    printf("Time taken: %f seconds\n", end_time - start_time);
    
    return 0;
}
