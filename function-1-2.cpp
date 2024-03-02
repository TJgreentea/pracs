#include <iostream>

// Function declaration
double array_mean(int array[], int n);

// Function implementation
double array_mean(int array[], int n) {
    if (n < 1) return 0.0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += array[i];
    }
    return static_cast<double>(sum) / n; // Cast sum to double for accurate division
}
