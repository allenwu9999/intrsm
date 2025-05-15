
def chart1():
    M = 4
    thread_num = 1
    N = [100, 1000, 10000, 100000] # x axis
    intrsm = [0.721826, 1.440246, 1.628608, 2.040097] # y axis, GFLOPS
    openblas = [0.798471, 0.920488, 1.184983, 1.427980] # y axis, GFLOPS
    
def chart2():
    M = 4
    thread_num = 1
    N = [100, 1000, 10000, 100000] # x axis
    speedup = [0.002004/0.002217, 0.017382/0.011109, 0.135023/0.098243, 1.120464/0.784276] # y axis, speedup

def chart3():
    M = 4
    N = 100000
    thread_num = 1
    sparsity = [0, 0.167, 0.333, 0.5, 0.667, 0.833, 1] # x axis
    exec_time = [0.520360, 0.613614, 0.682085, 0.738523, 0.755969, 0.886484, 1.032228] # y axis, ms

def chart4():
    M = 4
    N = 100000
    sparsity = 0.5
    thread_num = [1, 2, 4, 8] # x axis
    intrsm = [0.784276, 0.404458, 0.243584, 0.130115] # y axis, ms
    openblas = [1.120464, 0.621054, 0.374693, 0.195099] # y axis, ms