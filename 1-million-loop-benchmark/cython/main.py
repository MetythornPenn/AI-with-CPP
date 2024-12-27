from benchmark_cython import run_loop
import time

start = time.time()
result = run_loop()
end = time.time()

print(f"[Cython] Sum: {result}, Time: {end - start:.4f} sec")
