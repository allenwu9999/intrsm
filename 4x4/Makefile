BIN = bin
OBJS = $(BIN)/1_1 $(BIN)/1_2 $(BIN)/1_3 $(BIN)/1_4 $(BIN)/1_5 $(BIN)/1_6 $(BIN)/2_12 $(BIN)/3_123 $(BIN)/4_1234 $(BIN)/5_12345 $(BIN)/6_123456 $(BIN)/general

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

$(BIN)/3_123: intrsm_LN_4x4_3_123.c
	gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/4_1234: intrsm_LN_4x4_4_1234.c
	gcc -c $< -o $@ -mavx2 -mfma -fopenmp

$(BIN)/5_12345: intrsm_LN_4x4_5_12345.c
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
