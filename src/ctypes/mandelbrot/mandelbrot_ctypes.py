from ctypes import CDLL, POINTER, c_int, c_ubyte
import numpy as np
import matplotlib.pyplot as plt

# Load the shared library
lib = CDLL('./mandelbrot.so')

# Set function argument types
lib.mandelbrot.argtypes = [c_int, c_int, c_int, POINTER(c_ubyte)]

def generate_mandelbrot(width, height, max_iter):
    # Prepare numpy array to receive the image
    result = np.zeros((height, width), dtype=np.uint8)
    
    # Call the C++ function
    lib.mandelbrot(width, height, max_iter, result.ctypes.data_as(POINTER(c_ubyte)))
    
    return result

# Mandelbrot Parameters
width, height = 1000, 1000
max_iter = 1000

# Generate the fractal
image = generate_mandelbrot(width, height, max_iter)

# Plot the result
plt.imshow(image, cmap='inferno')
plt.axis('off')
plt.title("Mandelbrot Fractal (C++ Accelerated)")
plt.show()
