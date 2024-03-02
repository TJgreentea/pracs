#include <iostream>
using namespace std;

// Forward declaration of the function
bool is_fanarray(int array[], int n);

int main() {
    // Test cases
    int array1[] = {1, 2, 3, 2, 1};
    int n1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {1, 3, 5, 4, 2};
    int n2 = sizeof(array2) / sizeof(array2[0]);

    // Calling the function with test arrays
    cout << "Array 1 is a fan array: " << is_fanarray(array1, n1) << endl;
    cout << "Array 2 is a fan array: " << is_fanarray(array2, n2) << endl;

    return 0;
}
