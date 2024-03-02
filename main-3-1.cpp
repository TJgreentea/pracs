#include <iostream>
extern bool is_fanarray(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    int array2[] = {1, 3, 5, 4, 2};
    std::cout << "Array 1 is a fan array: " << is_fanarray(array1, sizeof(array1) / sizeof(array1[0])) << std::endl;
    std::cout << "Array 2 is a fan array: " << is_fanarray(array2, sizeof(array2) / sizeof(array2[0])) << std::endl;
    return 0;
}
