/*
OOP-继承
*/
#include <iostream>
using namespace std;

//基类
class Base
{
public:
	int bnum1_;
	int bnum2_;
	void print() {
		cout << "base" << endl;
		cout << "bnum1:" << bnum1_ << "bnum2:" << bnum2_ << endl;
	}
private:

};


//派生类，继承自Base
class Derived :public Base
{
public:
	int dnum_; //派生类中新增加的数据成员
	void print() {
		cout << "Derived" << endl;
		cout << "bnum1:" << bnum1_ << "bnum2:" << bnum2_ << "dnum:" << dnum_ << endl;
	}

};


int main()
{
	Base b1;
	b1.bnum1_ = 10;
	b1.bnum2_ = 20;

	Derived d1;
	d1.bnum1_ = 10;
	d1.bnum2_ = 30;
	d1.dnum_ = 5;

	b1.print();
	d1.print();
	d1.Base::print();
}

