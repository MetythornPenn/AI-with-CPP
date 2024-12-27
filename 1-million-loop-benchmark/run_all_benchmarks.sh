#!/bin/bash

echo "🏃 Running 1 Billion Loop Benchmarks..."

# ========== C++ ==========
echo "⚙️  [C++] Running C++ Benchmark..."
cd cpp
g++ main.cpp -o a.out -O3
./a.out
cd ..

# ========== Python ==========
echo "🐍 [Python] Running Python Benchmark..."
cd python
python3 main.py
cd ..

# ========== Cython ==========
echo "⚡ [Cython] Building and Running Cython Benchmark..."
cd cython
make clean > /dev/null 2>&1
make
python3 main.py
cd ..

# ========== C++ (ctypes) ==========
echo "🛠️  [C++ ctypes] Building and Running ctypes Benchmark..."
cd ctypes
make
python3 main.py
cd ..

# ========== Node.js ==========
echo "🚀 [Node.js] Running Node.js Benchmark..."
cd node
node main.js
cd ..

# ========== Bun ==========
echo "🔥 [Bun] Running Bun.js Benchmark..."
cd bun
bun main.js
cd ..

# ========== Go ==========
echo "🏎️  [Go] Running Go Benchmark..."
cd go
go run main.go
cd ..

echo "✅ All benchmarks completed!"
