//
// Created by wangyong on 11/13/17.
// for 循环
//

#ifndef CPRIMER_CH1_4_2_H
#define CPRIMER_CH1_4_2_H

#include <iostream>
using namespace std;

void cfor(){

    int sum = 0;
    for(int val = 1;val <=10 ;val++){
        sum += val;
    }

    std::cout << "For , Sum of 1 to 10 inclusive is " << sum << std::endl;
}

#endif //CPRIMER_CH1_4_2_H
