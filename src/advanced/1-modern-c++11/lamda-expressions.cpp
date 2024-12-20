#include <iostream>

int main() {

    /*
    Lambda Expressions:
    Define anonymous functions inline.

    */
    auto add = [](int a, int b) { return a + b; };
    std::cout << add(3,4); // 7

    /*
    constexpr and Compile-Time Computation: 
    Mark functions and variables for compile-time evaluation, 
    if possible, for performance gains.
    */
    constexpr int square(int x) { return x*x; }
    static_assert(square(5) == 25);

}
