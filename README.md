# intrsm

## Environment

- x86 machine required
- support Intel mm256 intrinsics

## How to

```bash=
cd 4x4 && make
./expr 4 <N> <iter>
```

If you want to compare with OpenBLAS, use

```bash=
./benchmark 4 <N> <iter>
```

## Multithreading

If you want to change the thread numbers for the program, use the following command before run:

```bash=
export OMP_THREAD_NUM=<number of threads you wish to run concurrently>
```
