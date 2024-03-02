#include <iostream>
using namespace std;

// Function prototype to ensure the main function knows about is_fanarray
bool is_fanarray(int array[], int n);

int main() {
    int array1[] = {1, 2, 3, 2, 1};
    int array2[] = {2, 4, 4, 2};
    int array3[] = {1, 2, 1, 2, 1};
    int array4[] = {1, 3, 5, 4, 2};
    int array5[] = {5};
    int array6[] = {1, 2, 3, 4, 5};

    cout << "Array1 is a fan array? " << (is_fanarray(array1, 5) ? "Yes" : "No") << endl;
    cout << "Array2 is a fan array? " << (is_fanarray(array2, 4) ? "Yes" : "No") << endl;
    cout << "Array3 is a fan array? " << (is_fanarray(array3, 5) ? "Yes" : "No") << endl;
    cout << "Array4 is a fan array? " << (is_fanarray(array4, 5) ? "Yes" : "No") << endl;
    cout << "Array5 is a fan array? " << (is_fanarray(array5, 1) ? "Yes" : "No") << endl;
    cout << "Array6 is a fan array? " << (is_fanarray(array6, 5) ? "Yes" : "No") << endl;

    return 0;
}
