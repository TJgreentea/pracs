#include<iostream>
extern int*readnumbers();
extern void printNumbers(int *numbers,int length);
int main(){
    int *numbers=readnumbers();
    printNumbers(numbers,10);
    delete[] numbers;
    return 0;
}