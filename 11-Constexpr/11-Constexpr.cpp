/*
constexpr函数
*/
#include <iostream>
using namespace std;

//常量表达式函数
constexpr int fact(int n) {
    return n == 1 ? 1 : n * fact(n - 1);
}
//常量表达式
constexpr int num = 5;
int main()
{
    //在编译期间就可以计算并返回结果
    cout << fact(num) << endl;
    cout << fact(3) << endl;

    //实参为变量时，在程序运行期间计算并返回结果
    int i = 7;
    int res = fact(i);
    cout << res << endl;
}

 