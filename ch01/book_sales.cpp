/**
 * @file book_sales.cpp
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
    Sales_item total;
    if(std::cin>>total){
        Sales_item trans;
        while(std::cin>>trans){
            if(total.isbn() == trans.isbn()){
                total += trans;
            }
            else{
                std::cout<<total<<std::endl;
                total = trans;
            }
        }
        std::cout<<total<<std::endl;
    }
    else{
        std::cerr<<"No data!"<<std::endl;
        return -1;
    }
    return 0;
}