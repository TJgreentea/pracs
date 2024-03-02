#include <iostream>
#include <map> // For counting occurrences of each distinct element

double weighted_average(int array[], int n) {
    if (n < 1) return 0.0;

    std::map<int, int> frequency;
    for (int i = 0; i < n; ++i) {
        frequency[array[i]]++; // Incrementing the frequency of each element
    }

    double weightedSum = 0.0;
    for (auto& elem : frequency) {
        weightedSum += elem.first * elem.second; // elem.first is the element, elem.second is its frequency
    }

    return weightedSum / n; // Dividing the weighted sum by the total number of elements
}
