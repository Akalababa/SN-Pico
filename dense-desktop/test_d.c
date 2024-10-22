#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <time.h>
#include <sys/time.h>

#include "pol20.h"

static int y[n]; 
static int k=0;  
static bool finalResultPrinted = false;

double magma_wtime( void )
{
  struct timeval t;
  gettimeofday( &t, NULL );
  return t.tv_sec + t.tv_usec*1e-6;
}
//void print_matr(int *x, int d1, int d2);
//void print_vect(int *x, int d1);

void loop();
int main() {
    double start_time, end_time;
    
    start_time = magma_wtime();
    loop();
    end_time = magma_wtime();
    
    printf("Time taken: %f seconds\n", end_time - start_time);
    
    return 0;
}

void print_matr(int *x, int d1, int d2) {
    for (int i = 0; i < d1; i++) {
        for (int j = 0; j < d2; j++) {
            printf("%d ", *(x + i * d2 + j));
        }
        printf("\n");
    }
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
        for (int j = 0; j < n; j++) y[j] = INT_MAX;

        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
            	
                int yij = (b[i][j] > 0) ? mu[i] / b[i][j]: (b[i][j]< 0) ? ((mu[i] > 0) ? 0 : INT_MAX) : INT_MAX;
                y[j] = (y[j] < yij) ? y[j] : yij;
            }                  

        for (int j = 0; j < n; j++)
            for (int i = 0; i < n; i++) {
                if (i == j) continue;
                if (/*get_sparse_rs(rs, i, j)*/r[i][j] > 0 && y[i] != 0) 
                    y[j] = 0;
            }

        int jj = -1;
        for (int j = 0; j < n; j++)
            if (y[j] > 0) {
                jj = j;
                break;
            }

        if (jj == -1) {
            go = false;
            break;
        }

        int yy = y[jj];

        for (int i = 0; i < m; i++)
        {
            mu[i] = mu[i] - ((b[i][jj] > 0) ? yy * b[i][jj] : 0) + yy * d[i][jj];
		}
        k++;
        //print_progress(k, total_steps);
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
