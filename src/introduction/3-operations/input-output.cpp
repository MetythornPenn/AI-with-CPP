#include <iostream>
#include <string>

int main() {
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name; // Reads a single token (no spaces)

    std::cout << "Hello, " << name << "!\n";

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age; // Reads an integer

    std::cout << "You are " << age << " years old.\n";

    return 0;
}
