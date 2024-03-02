#include <iostream>
extern int min_element(int array[], int n);

int main() {
    int array[] = {7, 2, 3, 1, 5};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Minimum element: " << min_element(array, n) << std::endl;
    return 0;
}
