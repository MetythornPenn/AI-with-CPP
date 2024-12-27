#include <iostream>
#include <chrono>

int main() {
    auto start = std::chrono::high_resolution_clock::now();

    long long total = 0;
    for (int i = 0; i < 1'000'000; i++) {
        total += i;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = end - start;

    std::cout << "[C++] Sum: " << total << ", Time: " << duration.count() << " sec" << std::endl;

    return 0;
}
