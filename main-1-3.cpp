#include <iostream>
using namespace std;

// Function declaration
int num_count(int array[], int n, int number);

int main() {
    int array[] = {1, 2, 3, 4, 5, 2};
    int n = sizeof(array) / sizeof(array[0]);
    int number = 2;
    cout << "Count of " << number << ": " << num_count(array, n, number) << endl;
    return 0;
}
