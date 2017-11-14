// if iaojan
// Created by wangyong on 11/14/17.
//

#ifndef CPRIMER_CH1_4_4_IF_H
#define CPRIMER_CH1_4_4_IF_H

#include <iostream>

using namespace std;

void func_if() {

    // currVal 是我们正在统计的数，我们将读入的新值存入val
    int currVal = 0, val = 0;

    if (std::cin >> currVal){
        int cnt = 1;
        while (std::cin >> val){
            if(val == currVal){
                ++cnt;
            }else{
                std::cout << currVal << " occurs " << cnt << " times " <<std::endl;
                currVal = val;
                cnt = 1;
            }
        }

        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }

}

#endif //CPRIMER_CH1_4_4_IF_H
