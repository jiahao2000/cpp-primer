/**
 * @file Sales_data.cpp
 * @author jiahao
 * @brief 
 * @version 0.1
 * @date 2022-07-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include<string>//加上.h回去找C语言的库

struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
#endif

