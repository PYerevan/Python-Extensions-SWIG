import time
import sys


def py_fact(n):
    if n <= 1:
        return 1
    else:
        return n * py_fact(n - 1)


if len(sys.argv) != 3:
    print("Run the command:\n python3 <script> <number> <N>")
    sys.exit()

n = int(sys.argv[1])
N = int(sys.argv[2])
mean_time = 0
fac = 0
for i in range(N):
    start = time.perf_counter()
    fac = py_fact(n)
    elapsed_time = time.perf_counter() - start
    mean_time += elapsed_time

print(f"Measuring {N} times")
print(f"Elapsed time {mean_time / N:.4E}")
print(f"Factorial({n})={fac}")
