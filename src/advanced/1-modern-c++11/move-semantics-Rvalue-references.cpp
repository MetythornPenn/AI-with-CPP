#include <iostream>

/*
Move Semantics and Rvalue References:
Help avoid unnecessary copying and improve performance.

*/
int main() {

    std::string s = "Hello";
    std::string s2 = std::move(s); // Move s into s2, no copy


}
