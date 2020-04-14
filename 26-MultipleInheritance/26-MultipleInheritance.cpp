/*
多重继承
*/
#include <iostream>
using namespace std;

class B1
{
public:
	B1(int b1 = 0) {
		b1_ = b1;
		cout << "B1的构造函数" << endl;
	}
	~B1() {};
	void print() {
		cout << " b1_:" << b1_ << endl;
	}

	void add() {
		b1_ += 1;
	}
protected:
	int b1_;

private:

};

class B2
{
public:
	B2(int b2 = 0) {
		b2_ = b2;
		cout << "B2的构造函数" << endl;
	}
	~B2() {};
	void print() {
		cout << " b2_:" << b2_ << endl;
	}

	void add() {
		b2_ += 1;
	}
protected:
	int b2_;

private:

};

class Derived :public B1, public B2 {
private:
	int d_;
public:
	//构造函数，先调用B1的，再调用B2的，最后调用派生类的
	Derived(int b1 = 0, int b2 = 0, int d = 0) :B1(b1), B2(b2) {
		d_ = d;
		cout << "D的构造函数" << endl;
	}
	~Derived() {};
	void print() {
		cout << "b1_ :" << b1_ << "b2_:" << b2_ << "d_" << d_ << endl;
	}
};
int main()
{
	B1 b1(5);
	b1.print();

	B2 b2(7);
	b2.print();

	Derived d1(2, 9, 4);
	Derived d2;
	//如果派生类中有和基类同名的成员，则会将基类中的成员覆盖掉
	//如果需要使用基类中的成员，则需要使用::声明
	d1.print();
	d1.B1::print();
	//如果多继承中的多个基类中有同名成员，访问时，应该加以识别
	d1.B1::add();
}

