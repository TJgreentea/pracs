#include <iostream>
#include <vector>
#include <algorithm>
int* readnumbers() {
    int* numbers = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }
    return numbers; // 
}

void printNumbers(int *numbers,int length){
    for (int i=0; i<length;i++){
        std::cout <<i<<" "<<numbers[i]<<std::endl;
    }
   }
int secondSmallestSum(int *numbers,int length){
 std::vector<int> sums;
 for (int start=0;start<length;++start){
    int sum=0;
    for (int end=start; end<length;++end){
    for (int i=start;i<=end;++i){
        sum+=numbers[i];
    }
    sums.push_back(sum);
    }
    std::sort(sums.begin(), sums.end());

    int firstSmallest = sums[0];
    int secondSmallest = sums[1];
    for (size_t i = 1; i < sums.size(); ++i) {
        if (sums[i] > firstSmallest) {
            secondSmallest = sums[i];
            break; 
        }
    }
    
    return secondSmallest;
}
}
