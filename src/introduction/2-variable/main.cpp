#include <iostream>

/*
Variables and Initialization


Declaring a variable: int x;
This creates a variable named x of type int.

Initializing a variable: int y = 10;
This creates an int variable y and initializes it to 10.

*/

int main() {
    int x{10};
    double d{3.14};
    std::string s{"Hi"};

    std::cout << x << " " << d << " " << s << "\n";


    // If you want a value that does not change, use const:
    const double PI = 3.1415;
    std::cout << "PI " << PI;

    return 0;
}
