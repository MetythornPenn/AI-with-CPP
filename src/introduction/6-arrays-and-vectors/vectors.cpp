#include <iostream>
#include <vector>


// Vectors (from the Standard Template Library) are dynamic arrays:

int main() {


    std::vector<int> nums = {1, 2, 3};
    nums.push_back(4); // now nums = {1, 2, 3, 4}

    for (int n : nums) {
        std::cout << n << " ";
    }
    std::cout << "\n";
    return 0;

}
