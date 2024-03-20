#include<iostream>
extern int*readnumbers(int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);
int main(){
    int length;
    std::cout<<"Enter the length";
    std::cin>>length;
    std::cout<<"Fill the first array:/n";
    int* numbers1=readnumbers(length);
    std::cout << "Fill the second array:/n";
    int* numbers2 = readnumbers(length);
    int* reversed=reverseArray(numbers1,length);
    bool areEqual = equalsArray(numbers1, numbers2, length);
    if (areEqual) {
        std::cout << "The arrays are equal." << std::endl;
    } else {
        std::cout << "The arrays are not equal." << std::endl;
    }
  delete[] numbers1;
    delete[] numbers2;
    delete[] reversed;
 }