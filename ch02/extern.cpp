/**
 * @file extern.cpp
 * @author jiahao
 * @brief 
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
int a = 10;
extern int b;
int main(){

    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    return 0;
}