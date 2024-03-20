#include <iostream>
int *readnumbers(int length){
    int *numbers=new int[length];
    for(int i=0;i<length;i++){
       std::cin>>numbers[i];
     return numbers;  
    }
}
bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length<1){
        return false;
    }
    for (int i=0;i<length;++i){
        if(numbers1[i]!=numbers2[i]){
            return false;
        }
        return true;
    }
}