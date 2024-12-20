#include <iostream>
#include <string>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "Positive\n";
    } else if (number == 0) {
        std::cout << "Zero\n";
    } else {
        std::cout << "Negative\n";
    }


    return 0;
}
