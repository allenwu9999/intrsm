export OMP_NUM_THREADS=1
echo "Running with 1 thread"
./run_expr.sh
export OMP_NUM_THREADS=2
echo "Running with 2 threads"
./run_expr.sh
export OMP_NUM_THREADS=4
echo "Running with 4 threads"
./run_expr.sh
export OMP_NUM_THREADS=8
echo "Running with 8 threads"
./run_expr.sh
export OMP_NUM_THREADS=1
echo "Running with 1 thread"
./run_benchmark.sh
export OMP_NUM_THREADS=2
echo "Running with 2 threads"
./run_benchmark.sh
export OMP_NUM_THREADS=4
echo "Running with 4 threads"
./run_benchmark.sh
export OMP_NUM_THREADS=8
echo "Running with 8 threads"
./run_benchmark.sh