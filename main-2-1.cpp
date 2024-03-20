#include<iostream>


extern int* readnumbers(); // This matches your function call
extern void hexDigits(int *numbers, int length);

int main(){
    int *numbers = readnumbers(); // Calls the external function to get the array of numbers
    hexDigits(numbers, 10); // Calls the external function to print hex digits
    delete[] numbers; // Cleans up dynamically allocated memory
    return 0;
}
