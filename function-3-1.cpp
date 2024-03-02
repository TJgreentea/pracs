#include <iostream>
using namespace std;

// Function signature as per the instructions
bool is_fanarray(int array[], int n) {
    // Check if n is less than 1
    if (n < 1) return false;

    // Check if the array is a palindrome and ascending to the middle
    for (int i = 0; i < n / 2; i++) {
        // Palindrome check
        if (array[i] != array[n - 1 - i]) return false;
        // Ascending order check
        if (i > 0 && array[i] < array[i - 1]) return false;
    }

    return true;
}
