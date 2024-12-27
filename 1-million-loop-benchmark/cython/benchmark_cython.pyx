def run_loop():
    cdef int i
    cdef long total = 0
    for i in range(1_000_000_000):
        total += i
    return total
