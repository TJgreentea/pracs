#include "orc.h"
#include <iostream>
Orchestra::Orchestra():members(nullptr),max_size(0),current_numbers(0){

}
Orchestra::Orchestra(int size):max_size(size),current_numbers(0){
    members=new musician[max_size];
}
Orchestra::~Orchestra();
delete[] members;
int int get_current_members()
bool has_instrument(std::string instrument){
    for(i=0;i<maxsize;++i)
}
