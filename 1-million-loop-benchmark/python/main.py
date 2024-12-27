import time

def run_loop():
    total = 0
    for i in range(1000000000):
        total += i
    return total

start = time.time()
result = run_loop()
end = time.time()

print(f"[Python] Sum: {result}, Time: {end - start:.4f} sec")
