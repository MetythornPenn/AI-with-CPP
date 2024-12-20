#include <iostream>

  // func definition
  int add(int a, int b) {
    return a + b;
  }


  int main() {
    int result = add(3, 4); // Calling the function
    std::cout << "3 + 4 : " << result << "\n";
  
    return 0;
  }