#include <iostream>
using namespace std;

// Function prototype is necessary if you split the definition and declaration
bool is_fanarray(int array[], int n);

bool is_fanarray(int array[], int n) {
    if (n < 1) return false;
    
    for (int i = 0; i < n / 2; ++i) {
        // Check for ascending order only until the middle
        if (i > 0 && array[i] < array[i - 1]) return false;
        // Check palindrome property
        if (array[i] != array[n - i - 1]) return false;
    }
    return true;
}
