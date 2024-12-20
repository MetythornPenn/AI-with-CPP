#include <iostream>

/*
Pointers store memory addresses. 
While this may be more advanced and not strictly necessary for your first steps, 
understanding the basics is useful:
*/

int main() {

    int value = 42;
    int* ptr = &value; // ptr holds the address of value
    std::cout << "Value: " << value << ", Address: " << ptr << ", Dereferenced: " << *ptr << "\n";

}


