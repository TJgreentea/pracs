#include <iostream>
extern double sum_even(double array[], int n);

int main() {
    double array[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int n = sizeof(array) / sizeof(array[0]);
    std::cout << "Sum of elements in even positions: " << sum_even(array, n) << std::endl;
    return 0;
}
