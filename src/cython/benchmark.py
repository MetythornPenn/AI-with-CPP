import numpy as np
import time
from matrix import matrix_multiply_py
from matrix_cy import matrix_multiply_cy

# Generate large random matrices
A = np.random.rand(500, 500)
B = np.random.rand(500, 500)

# Python version
start = time.time()
result_py = matrix_multiply_py(A, B)
end = time.time()
print(f"Python Version: {end - start:.4f} seconds")

# Cython version
start = time.time()
result_cy = matrix_multiply_cy(A, B)
end = time.time()
print(f"Cython Version: {end - start:.4f} seconds")

# Ensure results are the same
assert np.allclose(result_py, result_cy), "Results don't match!"
