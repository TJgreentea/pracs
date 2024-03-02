#include <iostream>
extern bool is_descending(int array[], int n);

int main() {
    int array[] = {5, 4, 3, 2, 1};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Array is in descending order: " << (is_descending(array, n) ? "true" : "false") << std::endl;
    return 0;
}
