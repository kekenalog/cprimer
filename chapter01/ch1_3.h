//
// Created by wangyong on 11/13/17.
// 注释
//

#include <iostream>

using namespace std;


//class CAnnotation {

void cAnnot() {

    //注释
    std::cout << "/*"; //合法的
    std::cout << "*/"; //合法的
//    std::cout << /* "*/" */; 非法的,编译不通过
    std::cout << /* "*/" /* "/*" */;

}
//};