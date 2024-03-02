#include <iostream>
using namespace std;

// Function declaration
int count_evens(int number);

int main() {
    int number = 10;
    cout << "Count of evens up to " << number << ": " << count_evens(number) << endl;
    return 0;
}
