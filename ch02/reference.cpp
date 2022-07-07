/**
 * @file reference.cpp
 * @author jiahao
 * @brief 
 * @version 0.1
 * @date 2022-06-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>

int main(){
    int i = 1024,i2 = 2048;
    int &r = i, r2 = i2;
    int i3 = 1024, &r3 = i3;

    return 0;
}