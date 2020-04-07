/*
函数
*/
#include <iostream>
#include <string>
using namespace std;
//函数的声明
void greet();
int sum(int a, int b);

int main()
{
	//调用sum函数传入实际参数
	sum(1, 2);
	greet();
}
//没有返回值，没有参数
void greet() {
	cout << "Hello!" << endl;
}

//返回值为int类型
//形式参数为2个int类型的值a,b
//函数名为sum
int sum(int a, int b) {
	int res = a + b;
	return res;
}
