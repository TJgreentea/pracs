#include <iostream>
#include <vector>

// Function declaration
bool is_fanarray(const std::vector<int>& array);

int main() {
    // Test vectors
    std::vector<int> array1 = {1, 2, 3, 2, 1};
    std::vector<int> array2 = {2, 4, 4, 2};
    std::vector<int> array3 = {1, 2, 1, 2, 1};
    std::vector<int> array4 = {1, 3, 5, 4, 2};
    std::vector<int> array5 = {5}; // Single element vector
    std::vector<int> array6 = {1, 2, 3, 4, 5}; // Strictly ascending, not a palindrome

    // Testing the vectors
    std::cout << "Array1 is a fan array? " << (is_fanarray(array1) ? "Yes" : "No") << std::endl;
    std::cout << "Array2 is a fan array? " << (is_fanarray(array2) ? "Yes" : "No") << std::endl;
    std::cout << "Array3 is a fan array? " << (is_fanarray(array3) ? "Yes" : "No") << std::endl;
    std::cout << "Array4 is a fan array? " << (is_fanarray(array4) ? "Yes" : "No") << std::endl;
    std::cout << "Array5 is a fan array? " << (is_fanarray(array5) ? "Yes" : "No") << std::endl;
    std::cout << "Array6 is a fan array? " << (is_fanarray(array6) ? "Yes" : "No") << std::endl;

    return 0;
}