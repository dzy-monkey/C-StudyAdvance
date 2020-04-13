/*
派生类中的static关键字
*/
#include <iostream>
using namespace std;

class Base
{
public:
	//定义一个静态成员
	static int i;
	void print() {
		cout << "i: " << i << endl;
	}
	//静态成员函数只能在类的内部定义
	//只能使用静态成员函数和静态数据成员
	static void Add1() {
		i++;
	}
private:

};

class Derived :public Base
{
public:
	void print() {
		cout << "i: " << i << endl;
	}
	static void Add2() {
		i++;
	}
private:

};


//初始化分配内存
int Base::i = 0;
int main()
{
	//在使用时，所有的基类和派生类对象使用的是同一个静态成员
	Base b1;
	b1.i = 2;
	b1.print();

	Derived d1;
	d1.i = 5;
	d1.print();
}

