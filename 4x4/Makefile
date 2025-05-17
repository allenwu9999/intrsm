BIN = bin
OBJS = $(BIN)/1_1 $(BIN)/1_2 $(BIN)/1_3 $(BIN)/1_4 $(BIN)/1_5 $(BIN)/1_6 
       $(BIN)/2_12 $(BIN)/2_13 $(BIN)/2_14 $(BIN)/2_15 $(BIN)/2_16 $(BIN)/2_23 $(BIN)/2_24 $(BIN)/2_25 $(BIN)/2_26 $(BIN)/2_34 $(BIN)/2_35 $(BIN)/2_36 $(BIN)/2_45 $(BIN)/2_46 $(BIN)/2_56 
       $(BIN)/3_123 $(BIN)/3_124 $(BIN)/3_125 $(BIN)/3_126 $(BIN)/3_134 $(BIN)/3_135 $(BIN)/3_136 $(BIN)/3_145 $(BIN)/3_146 $(BIN)/3_156 $(BIN)/3_234 $(BIN)/3_235 $(BIN)/3_236 $(BIN)/3_245 $(BIN)/3_246 $(BIN)/3_256 $(BIN)/3_345 $(BIN)/3_346 $(BIN)/3_356 $(BIN)/3_456     
       $(BIN)/4_1234 $(BIN)/4_1235 $(BIN)/4_1236 $(BIN)/4_1245 $(BIN)/4_1246 $(BIN)/4_1256 $(BIN)/4_1345 $(BIN)/4_1346 $(BIN)/4_1356 $(BIN)/4_1456 $(BIN)/4_2345 $(BIN)/4_2346 $(BIN)/4_2356 $(BIN)/4_2456 $(BIN)/4_3456
       $(BIN)/5_12345 $(BIN)/5_12346 $(BIN)/5_12356 $(BIN)/5_12456 $(BIN)/5_13456 $(BIN)/5_23456  
       $(BIN)/6_123456 
       $(BIN)/general

all: $(BIN) $(OBJS)
    gcc trsm_expr.c intrsm_LN_4x4.c $(OBJS) -o expr -mavx2 -mfma -fopenmp

$(BIN):
    mkdir -p $(BIN)

$(BIN)/1_1: intrsm_LN_4x4_1_1.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/1_2: intrsm_LN_4x4_1_2.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/1_3: intrsm_LN_4x4_1_3.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/1_4: intrsm_LN_4x4_1_4.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/1_5: intrsm_LN_4x4_1_5.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/1_6: intrsm_LN_4x4_1_6.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_12: intrsm_LN_4x4_2_12.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_13: intrsm_LN_4x4_2_13.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_14: intrsm_LN_4x4_2_14.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_15: intrsm_LN_4x4_2_15.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_16: intrsm_LN_4x4_2_16.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_23: intrsm_LN_4x4_2_23.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_24: intrsm_LN_4x4_2_24.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_25: intrsm_LN_4x4_2_25.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_26: intrsm_LN_4x4_2_26.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_34: intrsm_LN_4x4_2_34.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_35: intrsm_LN_4x4_2_35.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_36: intrsm_LN_4x4_2_36.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_45: intrsm_LN_4x4_2_45.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_46: intrsm_LN_4x4_2_46.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/2_56: intrsm_LN_4x4_2_56.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_123: intrsm_LN_4x4_3_123.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_124: intrsm_LN_4x4_3_124.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_125: intrsm_LN_4x4_3_125.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_126: intrsm_LN_4x4_3_126.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_134: intrsm_LN_4x4_3_134.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_135: intrsm_LN_4x4_3_135.c 
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_136: intrsm_LN_4x4_3_136.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_145: intrsm_LN_4x4_3_145.c 
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_146: intrsm_LN_4x4_3_146.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_156: intrsm_LN_4x4_3_156.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_234: intrsm_LN_4x4_3_234.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_235: intrsm_LN_4x4_3_235.c 
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_236: intrsm_LN_4x4_3_236.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_245: intrsm_LN_4x4_3_245.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_246: intrsm_LN_4x4_3_246.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_256: intrsm_LN_4x4_3_256.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_345: intrsm_LN_4x4_3_345.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_346: intrsm_LN_4x4_3_346.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_356: intrsm_LN_4x4_3_356.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/3_456: intrsm_LN_4x4_3_456.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1234: intrsm_LN_4x4_4_1234.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1235: intrsm_LN_4x4_4_1235.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1236: intrsm_LN_4x4_4_1236.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1245: intrsm_LN_4x4_4_1245.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1246: intrsm_LN_4x4_4_1246.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1256: intrsm_LN_4x4_4_1256.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1345: intrsm_LN_4x4_4_1345.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1346: intrsm_LN_4x4_4_1346.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1356: intrsm_LN_4x4_4_1356.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1456: intrsm_LN_4x4_4_1456.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_2345: intrsm_LN_4x4_4_2345.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_2346: intrsm_LN_4x4_4_2346.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_2356: intrsm_LN_4x4_4_2356.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_2456: intrsm_LN_4x4_4_2456.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_3456: intrsm_LN_4x4_4_3456.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/5_12345: intrsm_LN_4x4_5_12345.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/5_12346: intrsm_LN_4x4_5_12346.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/5_12356: intrsm_LN_4x4_5_12356.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/5_12456: intrsm_LN_4x4_5_12456.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/5_13456: intrsm_LN_4x4_5_13456.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/5_23456: intrsm_LN_4x4_5_23456.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/6_123456: intrsm_LN_4x4_6_123456.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/general: intrsm_LN_4x4_general.c
    gcc -c $< -o $@ -mavx2 -mfma -fopenmp
    gcc trsm_benchmark.c -o benchmark /home/weilunw2/final_project/OpenBLAS/libopenblas.a

mkl:
    gcc trsm_mkl.c -I${CONDA_PREFIX}/include -L${CONDA_PREFIX}/lib -lmkl_rt -o trsm_mkl

clean:
    rm -f expr benchmark trsm_mkl
    rm -rf $(BIN)
