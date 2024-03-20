#include <iostream>
extern int*readnumbers();
extern void printNumbers(int *numbers,int length);
int main() {
    std::cout << "Enter 10 numbers:" << std::endl;
    int* numbers = readnumbers();
    int length = 10; // Because `readnumbers` always reads 10 numbers.
    
    printNumbers(numbers, length);
    
    int result = secondSmallestSum(numbers, length);
    std::cout << "The second smallest sum is: " << result << std::endl;
    
    delete[] numbers; 
    return 0;
}
