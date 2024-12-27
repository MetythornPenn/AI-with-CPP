from ctypes import CDLL
import time

lib = CDLL('./benchmark_ctypes.so')

start = time.time()
result = lib.run_loop()
end = time.time()

print(f"[C++ ctypes] Sum: {result}, Time: {end - start:.4f} sec")
