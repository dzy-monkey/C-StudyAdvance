/*
派生类的构造函数和析构函数
*/
#include <iostream>
using namespace std;
class Base
{
public:
	//基类的构造函数和析构函数
	Base() {
		bnum1_ = 0;
		cout << "调用基类的默认构造函数" << endl;
	}
	Base(int bnum1) {
		bnum1_ = bnum1;
		cout << "调用基类的构造函数" << endl;
	}
	~Base() {
		cout << "调用基类的析构函数" << endl;
	}
	void print() {
		cout << "bnum1_:" << bnum1_ << endl;
	}
protected:
	int bnum1_;
private:

};

class Derived : public Base
{
public:
	//派生类的构造函数，需要使用：Base()调用基类的构造函数，不写的话默认调用基类的默认构造函数
	Derived() :Base() {
		dnum1_ = 0;
		cout << "调用派生类的默认构造函数" << endl;
	}
	Derived(int bnum1, int dnum1) :Base(bnum1) {
		dnum1_ = dnum1;
		cout << "调用派生类的构造函数" << endl;
	}
	//派生类的析构函数，编译器会自动的调用基类的析构函数
	//先派生类再基类
	~Derived() {
		cout << "调用派生类的析构函数" << endl;
	}
	void print() {
		cout << "bnum1_:" << bnum1_ << "dnum1_" << dnum1_ << endl;
	}
private:
	int dnum1_;
};

class B {
public:
	int b_;
	B() {
		b_ = 0;
		cout << "调用B的默认构造函数" << endl;
	}

	B(int b) {
		b_ = b;
		cout << "调用B的构造函数" << endl;
	}
	~B() {
		cout << "调用B的析构函数" << endl;
	}
	void print() {
		cout << "b_: " << b_ << endl;
	}
};

class A :public Base
{

private:
	int a_;
	B b1;

public:
	A() : b1(), Base() {
		a_ = 0;
	}
	A(int b, int bnum1, int a) :b1(b), Base(bnum1) {
		a_ = a;
		cout << "调用A的构造函数" << endl;
	}
	~A() {
		cout << "调用A的析构函数" << endl;
	}
	void print() {
		cout << "b_: " << b1.b_ << " bnum1_ " << bnum1_ << "a_ " << a_ << endl;
	}

};


int main()
{
	Base base1;
	Base base2(2);
	base1.print();
	base2.print();

	Derived d1;
	Derived d2(3, 7);
	d1.print();
	d2.print();

	B b1;
	A a1;
	b1.print();
	a1.print(); 
	B b2(3);
	A a2(6, 7, 8);
	b2.print();
	a2.print();
}


