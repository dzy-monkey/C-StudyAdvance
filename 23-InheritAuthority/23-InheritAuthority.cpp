/*
继承访问权限
1.需要被外界访问的成员，设置为public
2.只能在当前类中访问的成员，设置为private
3.只能在当前类和派生类中访问的成员，设置为protected
*/
#include <iostream>
using namespace std;
class Base
{
public:
	int bnum1_;
private:
	int bnum2_;
protected:
	int bnum3_;

public:
	void setNum(int bnum1, int bnum2, int bnum3) {
		bnum1_ = bnum1;
		bnum2_ = bnum2;
		bnum3_ = bnum3;
	}
	friend void print(Base& b) {
		cout << b.bnum1_ << " " << b.bnum2_ << " " << b.bnum3_ << endl;
	}
};

class Derived :public Base
{
public:
	int dnum1_;
private:
	int dnum2_;
protected:
	int dnum3_;

public:
	//在派生类中只能访问到基类的Public成员和protected，不能访问基类的private成员，而不看派生类的继承方式
	void setNum(int dnum1, int dnum2, int dnum3) {
		dnum1_ = dnum1;
		dnum2_ = dnum2;
		dnum3_ = dnum3;
	}
	friend void printD(Derived& d) {
		d.bnum1_ = 10;
		//d.bnum2_ = 10; 基类的私有成员，在派生类中不可以访问
		d.bnum3_ = 20;
		cout << d.dnum1_ << " " << d.dnum2_ << " " << d.dnum3_ << endl;
	}
};

class Derived1 :private Base
{
public:
	void print() {
		//bnum2_=10 基类的私有成员，在派生类中不可以访问
		cout << bnum1_ << "  " << bnum3_ << endl;//基类的公有成员和保护成员，在派生类中可以访问
	}

private:

};

class Derived2 :protected Base
{
public:
	void print() {
		//bnum2_ = 1; 基类的私有成员，在派生类中无法访问
		cout << bnum1_ << " " << bnum3_ << endl;//基类的公有成员和保护成员，在派生类中可以访问
	}

private:

};

int main()
{
	Base b;
	b.bnum1_ = 10;
	//b.bnum2_ = 3; 在类的外部不可访问
	//b.bnum3_ = 2; 在类的外部不可访问
	b.setNum(14, 15, 17);
	print(b);

	//在派生类的外部访问基类中的成员时，会根据继承方式影响基类成员的访问级别
	//public 继承方式
	Derived d;
	d.bnum1_ = 10;//public -> public可以被访问
	//d.bnum2_ = 1;//private ->private 不可以被访问
	//d.bnum3_ = 2;//protected ->protected 不可以被访问

	//private 继承方式
	Derived1 d1;
	//d1.bnum1_ = 1; public -> private 不可以被访问 
	//d1.bnum2_ = 2; private ->private 不可以被访问 
	//d1.bnum3_ = 3; protected ->protected 不可以被访问 

	//protected 继承方式
	Derived2 d2;
	//d2.bnum1_ = 1; public -> protected 不可以被访问 
	//d2.bnum2_ = 2; private ->private 不可以被访问 
	//d2.bnum3_ = 3; protected ->protected 不可以被访问
	printD(d);
}


