/*
习题1
*/
#include <iostream>
using namespace std;
float harmonicMean(float a, float b);
int main()
{
	float num1, num2;
	cout << "请输入两个数的值" << endl;
	while (cin >> num1 >> num2 && num1 != 0 && num2 != 0)
	{
		cout << num1 << "和" << num2 << "的调和平均数为:" << harmonicMean(num1, num2) << endl;
		cout << "请输入两个数的值" << endl;
	}
}

//调和平均数
float harmonicMean(float a, float b) {
	return 2 * a * b / (a + b);
}