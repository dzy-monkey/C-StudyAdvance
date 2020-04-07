/*
作用域
*/

#include <iostream>
using namespace std;
int min(int num1, int num2, int num3);
//全局变量，作用域是全局的，不管在哪个函数中都可以调用
int a = 3;
int main()
{
	//res的作用域为main函数
	int res = min(3, 9, 2);
	res = min(2, 3, 5);
	cout << res << endl;
	cout << a << endl;
}
//形参的作用域只在所定义的函数内部
//块执行期间的对象称为自动对象
int min(int num1, int num2, int num3) {
	//res 的作用域为min函数
	int res;
	//静态局部变量，直到程序终止才被销毁
	static int count = 0;
	count+=1;
	cout << "count:" << count << endl;
	res = num1 < num2 ? num1 : num2;
	res = res < num3 ? res : num3;
	//测试全局变量
	cout << a << endl;
	return res;
}
