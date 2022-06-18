/**
 * @file add_item2.cpp
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
    Sales_item item1,item2;
    std::cin>>item1>>item2;
    if(item1.isbn() == item2.isbn()){
        std::cout<<item1+item2<<std::endl;
        return 0;
    }
    else{
        std::cerr<<"Data must refer to same ISBN"<<std::endl;
        return -1;
    }


}