#include <iostream>
#include "../headers/utils.h"

int test1_1(){
    std::cout<< "test1_1"<<std::endl;
    if(3 == sumOfTwoNumbers(1,2))
        return 0;
    return 1;
}

int test1_2(){
    std::cout<< "test1_2"<<std::endl;
    return 0;
} 

int main(){
    if (test1_1() == 1)
        return 1;
    if (test1_2() == 1)
        return 1;
    return 0;
}