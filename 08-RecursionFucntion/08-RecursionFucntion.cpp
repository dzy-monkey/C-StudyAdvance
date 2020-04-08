/*
递归函数
*/

#include <iostream>
using namespace std;
long fact(int i);

int main()
{
	int num;
	cout << "请输入一个10以内的正整数" << endl;
	cin >> num;
	long res = fact(num);
	cout << num<<"的阶乘为:" <<res << endl;

}

long fact(int i) {
	long temp;
	if (i == 0)
	{
		temp = 1;
	}
	else
	{
		temp = i * fact(i - 1);
	}
	return temp;
}
