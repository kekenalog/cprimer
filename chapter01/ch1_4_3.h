//
// Created by wangyong on 11/13/17.
// for 循环
//

#ifndef CPRIMER_CH1_4_2_H
#define CPRIMER_CH1_4_2_H

#include <iostream>

using namespace std;

void iwhile() {

    int sum = 0, value = 0;
    std::cout<< "Enter numbers : " << endl;
    while(std::cin >> value) {
        sum += value;
    }

    std::cout << "For , Sum of 1 to 10 inclusive is " << sum << std::endl;
}

#endif //CPRIMER_CH1_4_2_H
