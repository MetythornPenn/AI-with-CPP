#include <iostream>
#include <string>


/*
C++ provides several fundamental data types:

Integers (int): For whole numbers (e.g., int a = 10;).
Floating-Point (float, double): For real numbers (e.g., double pi = 3.14159;).
Characters (char): For single character storage (e.g., char ch = 'A';).
Boolean (bool): For true/false values (e.g., bool isReady = true;).
Strings (std::string): For text. This is actually part of the C++ Standard Library 
and not a primitive type, but we treat it as a fundamental type in everyday coding. 
(e.g., std::string name = "Alice";)

*/


int main() {
    int count = 3;
    double temperature = 26.8;
    char grade = 'A';
    bool isMe = false;
    std::string greeting = "hello bro!!!";



    std::cout << greeting << ":)\n";
    std::cout << "Count: " << count;
    std::cout << "Temp: " << temperature << "\n";
    std::cout << "Grade: " << grade << "\n";
    std::cout << "Is me ? " << isMe << "\n";
    return 0;
}