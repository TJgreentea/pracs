#include <iostream>

// Function declaration
bool is_descending(int array[], int n);

// Function implementation
bool is_descending(int array[], int n) {
    if (n < 1) return false;
    for (int i = 1; i < n; i++) {
        if (array[i] > array[i - 1]) {
            return false;
        }
    }
    return true;
}
