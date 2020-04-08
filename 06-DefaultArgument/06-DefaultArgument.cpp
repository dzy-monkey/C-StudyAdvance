/*
默认实参
*/
#include <iostream>
#include <string>

using namespace std;
void compare(int num1, int num2=100);
void greet(string name="User");
int main()
{
	int a = 50;
	int b = 120;
	compare(a);
	compare(b);
	compare(a, b);
	greet("dzy");
	greet();
}

void compare(int num1, int num2) {
	if (num1>num2)
	{
		cout << num1 << "大于" << num2 << endl;
	}
	else if (num1<num2)
	{
		cout << num1 << "小于" << num2 << endl;
	}
	else
	{
		cout << num1 << "等于" << num2 << endl;
	}
}

void greet(string name) {
	cout << name << "hello" << endl;
}