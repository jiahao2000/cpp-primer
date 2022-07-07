/**
 * @file convert.cpp
 * @author jiahao
 * @brief 
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>

int main(){
    bool b = 42;
    std::cout<<"b="<<b<<std::endl;
    int i = b;
    std::cout<<"i="<<i<<std::endl;
    i = 3.14;
    std::cout<<"i="<<i<<std::endl;
    double pi = i;
    std::cout<<"pi="<<pi<<std::endl;
    unsigned char c = -1;
    std::cout<<"c="<<c<<std::endl;
    // signed char c2 = 256;//结果是未定义的，在g++中会报错，停止运行
    // std::cout<<"c2="<<c2<<std::endl;

    return 0;
}