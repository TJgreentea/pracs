#include <algorithm> // For std::sort
#include <iostream>
using namespace std;

int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0) return 0;

    std::sort(array, array + n);
    return array[n / 2];
}
