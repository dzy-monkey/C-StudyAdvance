/*
虚继承
*/

#include<iostream>
using namespace std;

class B
{
public:
	int b_;
	B(int b = 0)
	{
		b_ = b;
		cout << "调用B的构造函数" << endl;
	}
};

class C1 :virtual public B
{
public:
	int c1_;
	C1(int b = 0, int c1 = 0) : B(b)
	{
		c1_ = c1;
		cout << "调用C1的构造函数" << endl;
	}
};

class C2 : virtual public B
{
public:
	int c2_;
	C2(int b = 0, int c2 = 0) : B(b)
	{
		c2_ = c2;
		cout << "调用C2的构造函数" << endl;
	}
};

class D : public C1, public C2
{
public:
	int d_;
	D(int b = 0, int c1 = 0, int c2 = 0, int d = 0) :B(b), C1(b, c1), C2(b, c2)
	{
		d_ = d;
		cout << "调用D的构造函数" << endl;
	}
	void print()
	{
		cout << "b_: " << b_ << " c1_: " << c1_ << " c2_: " << c2_ << " d_: " << d_ << endl;
	}
};

int main()
{
	D d1(2, 3, 4, 5);
	d1.print();

	d1.b_ = 5; //不加virtual，会出错，值不明确
	//d1.C1::b_ = 6;
	//d1.C2::b_ = 9;

	d1.c1_ = 10;
	d1.c2_ = 5;
	d1.d_ = 8;
	d1.print();
	return 0;
}

