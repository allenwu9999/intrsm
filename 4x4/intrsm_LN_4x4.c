#include "intrsm_LN_4x4_1_1.h"
#include "intrsm_LN_4x4_1_2.h"
#include "intrsm_LN_4x4_1_3.h"
#include "intrsm_LN_4x4_1_4.h"
#include "intrsm_LN_4x4_1_5.h"
#include "intrsm_LN_4x4_1_6.h"
#include "intrsm_LN_4x4_2_12.h"
// #include "intrsm_LN_4x4_2_13.h"
// #include "intrsm_LN_4x4_2_14.h"
// #include "intrsm_LN_4x4_2_15.h"
// #include "intrsm_LN_4x4_2_16.h"
#include "intrsm_LN_4x4_3_123.h"
#include "intrsm_LN_4x4_4_1234.h"
#include "intrsm_LN_4x4_5_12345.h"
#include "intrsm_LN_4x4_6_123456.h"
#include "intrsm_LN_4x4.h"
#include "intrsm_LN_4x4_general.h"
#include <stdio.h>

void trsm_4x4_LN(double *A, double *B, int N, int ldb) {
    int c = (1 << 0) * (A[1*4+0] == 0.0) + 
            (1 << 1) * (A[2*4+0] == 0.0) +
            (1 << 2) * (A[2*4+1] == 0.0) +
            (1 << 3) * (A[3*4+0] == 0.0) +
            (1 << 4) * (A[3*4+1] == 0.0) +
            (1 << 5) * (A[3*4+2] == 0.0);
    switch (c) {
        case 0b000000: trsm4x4_kernel(A, B, N, ldb); break;
        case 0b000001: trsm4x4_kernel_1_1(A, B, N, ldb); break;
        case 0b000010: trsm4x4_kernel_1_2(A, B, N, ldb); break;
        case 0b000011: trsm4x4_kernel_2_12(A, B, N, ldb); break;
        case 0b000100: trsm4x4_kernel_1_3(A, B, N, ldb); break;
        // case 0b000101: trsm4x4_kernel_2_13(A, B, N, ldb); break;
        // case 0b000110: trsm4x4_kernel_2_23(A, B, N, ldb); break;
        case 0b001000: trsm4x4_kernel_1_4(A, B, N, ldb); break;
        case 0b010000: trsm4x4_kernel_1_5(A, B, N, ldb); break;
        case 0b100000: trsm4x4_kernel_1_6(A, B, N, ldb); break;
        case 0b000111: trsm4x4_kernel_3_123(A, B, N, ldb); break;
        case 0b001111: trsm4x4_kernel_4_1234(A, B, N, ldb); break;
        case 0b011111: trsm4x4_kernel_5_12345(A, B, N, ldb); break;
        case 0b111111: trsm4x4_kernel_6_123456(A, B, N, ldb); break;
        default: {
            printf("Error: unexpected value of c = %d\n", c);
            break;
        }
    }
}