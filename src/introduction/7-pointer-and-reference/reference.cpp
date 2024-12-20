#include <iostream>


int main() {

    int x = 10;
    int& ref = x; // ref refers to x
    ref = 20;     // Changing ref actually changes x
    std::cout << x << "\n"; // prints 20


}


