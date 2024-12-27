import numpy as np
import matplotlib.pyplot as plt
import time

def linear_regression_py(x, y):
    n = len(x)
    sum_x = np.sum(x)
    sum_y = np.sum(y)
    sum_xy = np.sum(x * y)
    sum_xx = np.sum(x * x)

    slope = (n * sum_xy - sum_x * sum_y) / (n * sum_xx - sum_x**2)
    intercept = (sum_y - slope * sum_x) / n

    return slope, intercept

# Generate larger synthetic data (10 million points)
np.random.seed(42)
x = np.linspace(0, 10, 100_000_000)  # 10M points
y = 2.5 * x + np.random.normal(size=x.shape)

# Benchmark - Python Version
start_py = time.time()
slope_py, intercept_py = linear_regression_py(x, y)
end_py = time.time()

print(f"[Python] Slope: {slope_py:.2f}, Intercept: {intercept_py:.2f}")
print(f"[Python] Execution Time: {end_py - start_py:.4f} seconds")

# Plot (downsampled to avoid memory issues)
plt.scatter(x[::5000], y[::5000], color='blue', s=1, label='Data Points (sampled)')
plt.plot(x, slope_py * x + intercept_py, color='red', label='Python Regression Line')
plt.title('Linear Regression (Python, 10M Points)')
plt.legend()
plt.show()
