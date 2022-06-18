/**
 * @file read_item.cpp
 * @author jiahao 
 * @brief 
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
#include"Sales_item.h"

int main(){
    Sales_item item1, item2;
    std::cin>>item1>>item2;
    std::cout<<item1+item2<<std::endl;

    return 0;
}