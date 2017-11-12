/**
 * Created by wangyong on 11/13/17.
 * white 循环结构
 */

#include <iostream>

using namespace std;


void cwhite() {

    int sum = 0, val = 1;

    while (val <= 10) {
        sum += val;
        std::cout << "before val ++: " << val << std::endl;
        ++val;
//        before val ++: 1
//        after  val ++: 2
//        before val ++: 2
//        after  val ++: 3
//        before val ++: 3
//        after  val ++: 4
//        before val ++: 4
//        after  val ++: 5
//        before val ++: 5
//        after  val ++: 6
//        before val ++: 6
//        after  val ++: 7
//        before val ++: 7
//        after  val ++: 8
//        before val ++: 8
//        after  val ++: 9
//        before val ++: 9
//        after  val ++: 10
//        before val ++: 10
//        after  val ++: 11

//        val++;
//        before val ++: 1
//        after  val ++: 2
//        before val ++: 2
//        after  val ++: 3
//        before val ++: 3
//        after  val ++: 4
//        before val ++: 4
//        after  val ++: 5
//        before val ++: 5
//        after  val ++: 6
//        before val ++: 6
//        after  val ++: 7
//        before val ++: 7
//        after  val ++: 8
//        before val ++: 8
//        after  val ++: 9
//        before val ++: 9
//        after  val ++: 10
//        before val ++: 10
//        after  val ++: 11
        std::cout << "after  val ++: " << val << std::endl;
    }

    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;

}

