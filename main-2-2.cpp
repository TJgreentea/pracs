#include <iostream>
extern int max_element(int array[], int n);

int main() {
    int array[] = {7, 2, 3, 10, 5};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Maximum element: " << max_element(array, n) << std::endl;
    return 0;
}
