import factorial
import timeit


def py_fact(n):
    if n <= 1:
        return 1
    else:
        return n*py_fact(n-1)


n = 20
print(f"py_fact({n})={py_fact(n)}")
print(f"cc_fact({n})={factorial.fact(n)}")
py_time = timeit.timeit(lambda: py_fact(n), number=1000)
c_time = timeit.timeit(lambda: factorial.fact(n), number=1000)
print(f"py_processing time: {py_time:.0E}")
print(f"cc_processing time: {c_time:.0E}")
print(f"Proportion: {py_time/c_time:.0f}")
