/*
传引用参数
*/

#include <iostream>
using namespace std;
void reset(int& i);
int min(int num1, int num2, int num3, int& max);
int main()
{
	int num = 10;
	reset(num);
	cout << num << endl;
	int maxNum;
	int minNum;
	minNum = min(20, 15, 23, maxNum);
	cout << "最大值为：" << maxNum << endl;
	cout << "最小值为：" << minNum << endl;
}

//将引用变量作为参数，函数使用的是原始数据，而不是副本
//对形参的修改其实就是对实参的修改☆
//用途：1.当某种类型不支持拷贝操作，或者是需要拷贝的对象太大时，我们可以通过引用形参来访问对象
//用途：2.当函数需要同时返回多个值时，可以使用引用形参来处理
void reset(int& i) {
	i = i * 2;
} 
//函数的返回值为int类型，返回的是3个数中的最小值
//定义了一个引用类型的参数，通过这个参数修改maxNum的值，获得最大值
int min(int num1, int num2, int num3,int &max) {
	int temp1, temp2;
	temp1 = num1 < num2 ? num1 : num2;
	temp1 = temp1 < num3 ? temp1 : num3;

	temp2 = num1 > num1 ? num1 : num2;
	temp2 = temp2 > num3 ? temp2 : num3;

	max = temp2;
	return temp1;
}