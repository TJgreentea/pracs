#include <iostream>
#include <map>
using namespace std;

double weighted_average(int array[], int n) {
    if (n < 1) return 0.0;
    
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += array[i]; // Summing all elements
    }
    
    return sum / n; // Dividing by the total number of elements
}

