from ctypes import CDLL, POINTER, c_double, c_int
import numpy as np
import matplotlib.pyplot as plt
import time

# Load the shared library
lib = CDLL('./linear_regression.so')

# Set argument and return types
lib.linear_regression.argtypes = [
    POINTER(c_double), POINTER(c_double), c_int,
    POINTER(c_double), POINTER(c_double)
]

def linear_regression_cpp(x, y):
    n = len(x)
    x = np.array(x, dtype=np.float64)
    y = np.array(y, dtype=np.float64)
    
    slope = c_double(0.0)
    intercept = c_double(0.0)

    # Call C++ function
    lib.linear_regression(
        x.ctypes.data_as(POINTER(c_double)),
        y.ctypes.data_as(POINTER(c_double)),
        n,
        slope,
        intercept
    )
    return slope.value, intercept.value

# Generate larger synthetic data (10 million points)
np.random.seed(42)
x = np.linspace(0, 10, 100_000_000)  # 10M points
y = 2.5 * x + np.random.normal(size=x.shape)

# Benchmark - C++ Version
start_cpp = time.time()
slope_cpp, intercept_cpp = linear_regression_cpp(x, y)
end_cpp = time.time()

print(f"[C++] Slope: {slope_cpp:.2f}, Intercept: {intercept_cpp:.2f}")
print(f"[C++] Execution Time: {end_cpp - start_cpp:.4f} seconds")

# Plot (downsampled)
plt.scatter(x[::5000], y[::5000], color='blue', s=1, label='Data Points (sampled)')
plt.plot(x, slope_cpp * x + intercept_cpp, color='green', label='C++ Regression Line')
plt.title('Linear Regression (C++, 10M Points)')
plt.legend()
plt.show()
