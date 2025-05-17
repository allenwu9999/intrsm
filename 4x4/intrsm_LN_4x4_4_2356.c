#include <x86intrin.h>
#include <stdio.h>
#include <omp.h>
#include "intrsm_LN_4x4_4_2356.h"

void trsm4x4_kernel_4_2356(
    double  *A,
    double  *B,
    int      N,
    int      ldb
) {

    // broadcast invA’s 10 nonzero elements into registers
    double inv00 = 1.0 / A[0 * 4 + 0];
    __m256d i00 = _mm256_broadcast_sd(&inv00);
    __m256d i10 = _mm256_broadcast_sd(&A[1*4 + 0]);
    double inv11 = 1.0 / A[1 * 4 + 1];
    __m256d i11 = _mm256_broadcast_sd(&inv11);
    // __m256d i20 = _mm256_broadcast_sd(&A[2*4 + 0]);
    // __m256d i21 = _mm256_broadcast_sd(&A[2*4 + 1]);
    double inv22 = 1.0 / A[2 * 4 + 2];
    __m256d i22 = _mm256_broadcast_sd(&inv22);
    __m256d i30 = _mm256_broadcast_sd(&A[3*4 + 0]);
    // __m256d i31 = _mm256_broadcast_sd(&A[3*4 + 1]);
    // __m256d i32 = _mm256_broadcast_sd(&A[3*4 + 2]);
    double inv33 = 1.0 / A[3 * 4 + 3];
    __m256d i33 = _mm256_broadcast_sd(&inv33);
    
    // vector loop: 4 columns at a time
    #pragma omp parallel for
    for (int j = 0; j <= N - 4; j += 4) {
        __m256d b0 = _mm256_loadu_pd(B + 0*ldb + j);
        __m256d b1 = _mm256_loadu_pd(B + 1*ldb + j);
        __m256d b2 = _mm256_loadu_pd(B + 2*ldb + j);
        __m256d b3 = _mm256_loadu_pd(B + 3*ldb + j);

        // x0 = b0 / invA[0][0] = b0 * i00
        __m256d x0 = _mm256_mul_pd(i00, b0);

        // x1 = (b1 - i10*x0) / invA[1][1] = (b1 - i10*x0) * i11
        __m256d x1 = _mm256_mul_pd(i11, _mm256_fnmadd_pd(i10, x0, b1));

        // x2 = (b2 - i20*x0 - i21*x1) / invA[2][2] = b2 * i22
        __m256d x2 = _mm256_mul_pd(i22, b2);

        // x3 = (b3 - i30*x0 - i31*x1 - i32*x2) / invA[3][3] = (b3 - i30*x0) * i33
        __m256d x3 = _mm256_mul_pd(i33, _mm256_fnmadd_pd(i30, x0, b3));

        _mm256_storeu_pd(B + 0*ldb + j, x0);
        _mm256_storeu_pd(B + 1*ldb + j, x1);
        _mm256_storeu_pd(B + 2*ldb + j, x2);
        _mm256_storeu_pd(B + 3*ldb + j, x3);
    }

    // scalar fallback for remaining columns
    for (int j = N - N % 4; j < N; ++j) {
        double y0 = inv00 * B[0*ldb + j];
        double y1 = (B[1*ldb + j] - A[1*4 + 0] * y0) * inv11;
        double y2 = (B[2*ldb + j] - A[2*4 + 0] * y0 - A[2*4 + 1] * y1) * inv22;
        double y3 = (B[3*ldb + j] - A[3*4 + 0] * y0 - A[3*4 + 1] * y1 - A[3*4 + 2] * y2) * inv33;

        B[0*ldb + j] = y0;
        B[1*ldb + j] = y1;
        B[2*ldb + j] = y2;
        B[3*ldb + j] = y3;
    }
}
