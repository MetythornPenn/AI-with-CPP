#include <iostream>
#include <string>

int main() {

    char grade;
    std::cout << "Enter your grade (A-F): ";
    std::cin >> grade;

    switch (grade) {
        case 'A': std::cout << "Excellent!\n"; break;
        case 'B': std::cout << "Good Job.\n"; break;
        case 'C': std::cout << "Average.\n"; break;
        default:  std::cout << "Invalid grade.\n"; break;
    }


    return 0;
}
