#include <iostream>

int main() {
    // Arithmetic Operators: +, -, *, /, %
    int sum = 10 + 5;      // sum = 15
    int difference = 10 - 5; // difference = 5
    int product = 10 * 5;  // product = 50
    double quotient = 10.0 / 3.0; // quotient ≈ 3.3333
    int remainder = 10 % 3; // remainder = 1

    // Comparison Operators: ==, !=, <, >, <=, >=
    bool equal = (10 == 10);    // true
    bool notEqual = (10 != 5);  // true
    bool lessThan = (5 < 10);   // true

    // ogical Operators: && (AND), || (OR), ! (NOT)
    bool a = true;
    bool b = false;
    bool resultAnd = a && b;  // false
    bool resultOr = a || b;   // true
    bool resultNot = !a;      // false


    return 0;
}