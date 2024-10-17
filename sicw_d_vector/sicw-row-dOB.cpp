#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <time.h>
#include <sys/time.h>


#include "d4_sparse.h"

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

void loop() {
    bool go = true;
    while (go) {
        for (int j = 0; j < n; j++) {
            y[j] = INT_MAX; // Initialize y[j] to a large value

            for (int i = tbs[j]; i < (j < n - 1 ? tbs[j + 1] : KB); i++) {
                int pb = bs[i][0];
                int wb = bs[i][1];
				//int yij = (wb > 0) ? (mu[pb] / (wb-1)) : INT_MAX;
                int yij = (wb > 0) ? mu[pb] / wb : (wb < 0) ? ((mu[pb] > 0) ? 0 : INT_MAX) : INT_MAX;
                y[j] = (y[j] < yij) ? y[j] : yij;   
            }
        }
        
        for (int i = 0; i < n; i++) {
    		for (int idx = trs[vector[i]]; idx < trs[vector[i] + 1]; idx++) {
        		int j = rs[idx][0]; // 获取当前列索引
        		if (y[vector[i]] != 0) {
            		y[j] = 0;
        }
    }
}

//        for (int i = 0; i < n; i++) {
//    		for (int idx = trs[i]; idx < trs[i + 1]; idx++) {
//        		int j = rs[idx][0]; // 获取当前列索引
//        		if (y[i] != 0) {
//            		y[j] = 0;
//        }
//    }
//}
		

        // Find the next transition to fire
        int jj = -1;
        for (int j = 0; j < n; j++) {
            if (y[j] > 0) { 
                jj = j;
                break;
            }
        }

        if (jj == -1) {
                
            go = false;
            break;
        }
		

        int yy = y[jj];

        for (int i = 0; i < m; i++) {
            int b_value = 0;
            int d_value = 0;
            for (int x = tbs[jj]; x < (jj < n - 1 ? tbs[jj + 1] : KB); x++) {
                if (bs[x][0] == i) {
                    b_value = bs[x][1];
//                system("pause");
                    break;
                }
            }
            for (int x = tds[jj]; x < (jj < n - 1 ? tds[jj + 1] : KD); x++) {
                if (ds[x][0] == i) {
                    d_value = ds[x][1];
//                system("pause");
                    break;
                }
            }
            mu[i] = mu[i] - ((b_value > 0) ? yy * b_value: 0) + yy * d_value;
            
        }

        k++;
    }

    if (!go && !finalResultPrinted) {
        printf("Final mu: ");
        print_vect(mu, m);
        printf("Final y: ");
        print_vect(y, n);
        printf("Total number of steps: %d",k);
        finalResultPrinted = true;
    }

}
int main() {
    double start_time, end_time;
    
    start_time = magma_wtime();
    loop();
    end_time = magma_wtime();
    
    printf("Time taken: %f seconds\n", end_time - start_time);
    
    return 0;
}

