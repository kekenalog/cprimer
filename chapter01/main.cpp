#include <iostream>

using namespace std;

int main() {

    std::cout << "Enter two numbers :" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and "
                              << v2 << " is " << v1 + v2 << std::endl;

    //成功返回值 0 ,非0 代表含义需要参考系统编码
    return 0;
}
