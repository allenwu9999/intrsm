#include <cblas.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "intrsm_LN_4x4.h"

void run_dtrsm(int m, int n, double *A, double *B, int iter) {
    struct timespec start, end;
    double total_time = 0.0;

    for (int i = 0; i < iter; i++) {
        A[1 * 4 + 0] = 0.0;  // modify A[1][0] each iteration
        A[2 * 4 + 0] = 0.0;  // modify A[2][0] each iteration
        A[2 * 4 + 1] = 0.0;  // modify A[2][1] each iteration
        // A[3 * 4 + 0] = 0.0;  // modify A[3][0] each iteration
        // A[3 * 4 + 1] = 0.0;  // modify A[3][1] each iteration
        // A[3 * 4 + 2] = 0.0;  // modify A[3][2] each iteration


        clock_gettime(CLOCK_MONOTONIC, &start);
        cblas_dtrsm(CblasRowMajor, CblasLeft, CblasLower, CblasNoTrans, CblasNonUnit, m, n, 1.0, A, m, B, n);
        clock_gettime(CLOCK_MONOTONIC, &end);

        double time_taken = (end.tv_sec - start.tv_sec) * 1e9;
        time_taken += (end.tv_nsec - start.tv_nsec);
        total_time += time_taken;
    }

    total_time *= 1e-9;  // convert nanoseconds to seconds
    long long total_flops = 1LL * iter * n * m * m;
    long long flops_per_second = total_flops / total_time;

    printf("Matrix size: %d x %d\n", m, n);
    // printf("Total time for %d dtrsm calls: %f seconds\n", iter, total_time);
    printf("Avg time: %f ms\n", 1e3 * total_time / iter);
    printf("Throughput: %f GFLOPS\n", (1.0 * flops_per_second) / 1e9);
}


int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: %s <M> <N> <ITER>\n", argv[0]);
        return 1;
    }

    // int M = atoi(argv[1]);
    int M = 4;
    int N = atoi(argv[2]);
    int ITER = atoi(argv[3]);

    srand(time(NULL));

    double *A = (double *)malloc(M * M * sizeof(double));
    double *B = (double *)malloc(M * N * sizeof(double));

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
            A[i * M + j] = (i >= j) ? (double)rand() / RAND_MAX : 0.0;
        }
    }
    for (int i = 0; i < M * N; i++) {
        B[i] = (double)rand() / RAND_MAX;
    }

    run_dtrsm(M, N, A, B, ITER);

    free(A);
    free(B);
    return 0;
}
