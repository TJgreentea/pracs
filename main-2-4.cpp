#include <iostream>
extern bool is_ascending(int array[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Array is in ascending order: " << (is_ascending(array, n) ? "true" : "false") << std::endl;
    return 0;
}
