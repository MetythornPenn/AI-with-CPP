from ctypes import CDLL

# Load the shared library
lib = CDLL('./libadd.so')

# Call the function
result = lib.add(10, 20)
print(f"Result of addition: {result}")