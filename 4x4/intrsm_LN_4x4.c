#include "intrsm_LN_4x4_1_1.h"
#include "intrsm_LN_4x4_1_2.h"
#include "intrsm_LN_4x4_1_3.h"
#include "intrsm_LN_4x4_1_4.h"
#include "intrsm_LN_4x4_1_5.h"
#include "intrsm_LN_4x4_1_6.h"

#include "intrsm_LN_4x4_2_12.h"
#include "intrsm_LN_4x4_2_13.h"
#include "intrsm_LN_4x4_2_14.h"
#include "intrsm_LN_4x4_2_15.h"
#include "intrsm_LN_4x4_2_16.h"
#include "intrsm_LN_4x4_2_23.h"
#include "intrsm_LN_4x4_2_24.h"
#include "intrsm_LN_4x4_2_25.h"
#include "intrsm_LN_4x4_2_26.h"
#include "intrsm_LN_4x4_2_34.h"
#include "intrsm_LN_4x4_2_35.h"
#include "intrsm_LN_4x4_2_36.h"
#include "intrsm_LN_4x4_2_45.h"
#include "intrsm_LN_4x4_2_46.h"
#include "intrsm_LN_4x4_2_56.h"

#include "intrsm_LN_4x4_3_123.h"
#include "intrsm_LN_4x4_3_124.h"
#include "intrsm_LN_4x4_3_125.h"
#include "intrsm_LN_4x4_3_126.h"
#include "intrsm_LN_4x4_3_134.h"
#include "intrsm_LN_4x4_3_135.h"
#include "intrsm_LN_4x4_3_136.h"
#include "intrsm_LN_4x4_3_145.h"
#include "intrsm_LN_4x4_3_146.h"
#include "intrsm_LN_4x4_3_156.h"
#include "intrsm_LN_4x4_3_234.h"
#include "intrsm_LN_4x4_3_235.h"
#include "intrsm_LN_4x4_3_236.h"
#include "intrsm_LN_4x4_3_245.h"
#include "intrsm_LN_4x4_3_246.h"
#include "intrsm_LN_4x4_3_256.h"
#include "intrsm_LN_4x4_3_345.h"
#include "intrsm_LN_4x4_3_346.h"
#include "intrsm_LN_4x4_3_356.h"
#include "intrsm_LN_4x4_3_456.h"

#include "intrsm_LN_4x4_4_1234.h"
#include "intrsm_LN_4x4_4_1235.h"
#include "intrsm_LN_4x4_4_1236.h"
#include "intrsm_LN_4x4_4_1245.h"
#include "intrsm_LN_4x4_4_1246.h"
#include "intrsm_LN_4x4_4_1256.h"
#include "intrsm_LN_4x4_4_1345.h"
#include "intrsm_LN_4x4_4_1346.h"
#include "intrsm_LN_4x4_4_1356.h"
#include "intrsm_LN_4x4_4_1456.h"
#include "intrsm_LN_4x4_4_2345.h"
#include "intrsm_LN_4x4_4_2346.h"
#include "intrsm_LN_4x4_4_2356.h"
#include "intrsm_LN_4x4_4_2456.h"
#include "intrsm_LN_4x4_4_3456.h"

#include "intrsm_LN_4x4_5_12345.h"
#include "intrsm_LN_4x4_5_12346.h"
#include "intrsm_LN_4x4_5_12356.h"
#include "intrsm_LN_4x4_5_12456.h"
#include "intrsm_LN_4x4_5_13456.h"
#include "intrsm_LN_4x4_5_23456.h"
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
        case 0b000101: trsm4x4_kernel_2_13(A, B, N, ldb); break;
        case 0b000110: trsm4x4_kernel_2_23(A, B, N, ldb); break;
        case 0b000111: trsm4x4_kernel_3_123(A, B, N, ldb); break;
        case 0b001000: trsm4x4_kernel_1_4(A, B, N, ldb); break;
        case 0b001001: trsm4x4_kernel_2_14(A, B, N, ldb); break;
        case 0b001010: trsm4x4_kernel_2_24(A, B, N, ldb); break;
        case 0b001011: trsm4x4_kernel_3_124(A, B, N, ldb); break;
        case 0b001100: trsm4x4_kernel_3_34(A, B, N, ldb); break;
        case 0b001101: trsm4x4_kernel_3_134(A, B, N, ldb); break;
        case 0b001110: trsm4x4_kernel_3_234(A, B, N, ldb); break;
        case 0b001111: trsm4x4_kernel_4_1234(A, B, N, ldb); break;
        case 0b010000: trsm4x4_kernel_1_5(A, B, N, ldb); break;
        case 0b010001: trsm4x4_kernel_2_15(A, B, N, ldb); break;
        case 0b010010: trsm4x4_kernel_2_25(A, B, N, ldb); break;
        case 0b010011: trsm4x4_kernel_2_125(A, B, N, ldb); break;
        case 0b010100: trsm4x4_kernel_2_35(A, B, N, ldb); break;
        case 0b010101: trsm4x4_kernel_3_135(A, B, N, ldb); break;
        case 0b010110: trsm4x4_kernel_2_235(A, B, N, ldb); break;
        case 0b010111: trsm4x4_kernel_4_1235(A, B, N, ldb); break;
        case 0b011000: trsm4x4_kernel_2_45(A, B, N, ldb); break;
        case 0b011001: trsm4x4_kernel_3_145(A, B, N, ldb); break;
        case 0b011010: trsm4x4_kernel_3_245(A, B, N, ldb); break;
        case 0b011011: trsm4x4_kernel_4_1245(A, B, N, ldb); break;
        case 0b011100: trsm4x4_kernel_3_345(A, B, N, ldb); break;
        case 0b011101: trsm4x4_kernel_4_1345(A, B, N, ldb); break;
        case 0b011110: trsm4x4_kernel_4_2345(A, B, N, ldb); break;
        case 0b011111: trsm4x4_kernel_5_12345(A, B, N, ldb); break;
        case 0b100000: trsm4x4_kernel_1_6(A, B, N, ldb); break;
        case 0b100001: trsm4x4_kernel_2_16(A, B, N, ldb); break;
        case 0b100010: trsm4x4_kernel_2_26(A, B, N, ldb); break;
        case 0b100011: trsm4x4_kernel_3_126(A, B, N, ldb); break;
        case 0b100100: trsm4x4_kernel_2_36(A, B, N, ldb); break;
        case 0b100101: trsm4x4_kernel_3_136(A, B, N, ldb); break;
        case 0b100110: trsm4x4_kernel_3_236(A, B, N, ldb); break;
        case 0b100111: trsm4x4_kernel_4_1236(A, B, N, ldb); break;
        case 0b101000: trsm4x4_kernel_2_46(A, B, N, ldb); break;
        case 0b101001: trsm4x4_kernel_3_146(A, B, N, ldb); break;
        case 0b101010: trsm4x4_kernel_3_246(A, B, N, ldb); break;
        case 0b101011: trsm4x4_kernel_4_1246(A, B, N, ldb); break;
        case 0b101100: trsm4x4_kernel_3_346(A, B, N, ldb); break;
        case 0b101101: trsm4x4_kernel_4_1346(A, B, N, ldb); break;
        case 0b101110: trsm4x4_kernel_4_2346(A, B, N, ldb); break;
        case 0b101111: trsm4x4_kernel_5_12346(A, B, N, ldb); break;
        case 0b110000: trsm4x4_kernel_2_56(A, B, N, ldb); break;
        case 0b110001: trsm4x4_kernel_3_156(A, B, N, ldb); break;
        case 0b110010: trsm4x4_kernel_3_256(A, B, N, ldb); break;
        case 0b110011: trsm4x4_kernel_4_1256(A, B, N, ldb); break;
        case 0b110100: trsm4x4_kernel_3_356(A, B, N, ldb); break;
        case 0b110101: trsm4x4_kernel_4_1356(A, B, N, ldb); break;
        case 0b110110: trsm4x4_kernel_4_2356(A, B, N, ldb); break;
        case 0b110111: trsm4x4_kernel_5_12356(A, B, N, ldb); break;
        case 0b111000: trsm4x4_kernel_3_456(A, B, N, ldb); break;
        case 0b111001: trsm4x4_kernel_4_1456(A, B, N, ldb); break;
        case 0b111010: trsm4x4_kernel_4_2456(A, B, N, ldb); break;
        case 0b111011: trsm4x4_kernel_5_12456(A, B, N, ldb); break;
        case 0b111100: trsm4x4_kernel_4_3456(A, B, N, ldb); break;
        case 0b111101: trsm4x4_kernel_5_13456(A, B, N, ldb); break;
        case 0b111110: trsm4x4_kernel_5_23456(A, B, N, ldb); break;
        case 0b111111: trsm4x4_kernel_6_123456(A, B, N, ldb); break;
        default: {
            printf("Error: unexpected value of c = %d\n", c);
            break;
        }
    }
}