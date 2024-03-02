#include <iostream>
extern int median_array(int array[], int n);

int main() {
    int array[] = {3, 5, 2, 1, 4};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Median of the array is: " << median_array(array, n) << std::endl;
    return 0;
}
