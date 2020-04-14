/*
函数模板
泛型函数
*/

#include<iostream>

using namespace std;

//函数模板
//功能：比较两个值的大小，并返回较大的值
template <typename T>
T max(T a, T b)
{
	cout << "函数模板" << endl;
	return a > b ? a : b;
}

//函数模板的重载
char max(char a, char b)
{
	cout << "非模板函数" << endl;
	return a > b ? a : b;
}


//参数列表中也使用一般类型的参数
//T在函数定义中c定义中至少出现一次
template <typename T>
void compare(T a, int n)
{
	if (a > n)
		cout << a << "大于" << n << endl;
	else if (a == n)
		cout << a << "等于" << n << endl;
	else
		cout << a << "小于" << n << endl;

}

int main()
{
	cout << "10和8中较大的值为：" << max(10, 8) << endl;
	cout << "2.5和4.7中较大的值为：" << max<float>(2.5, 4.7) << endl;
	cout << "c 和 d中较大的值为： " << max('c', 'd') << endl;

	//max(10.5, 8); 

	compare(62.5, 100);
	compare(-2, 0);
	compare('a', 97);

	return 0;
}

