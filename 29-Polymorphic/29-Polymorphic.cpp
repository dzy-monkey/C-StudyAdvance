/*
多态的概念
*/

#include<iostream>

using namespace std;

class Base
{
public:
	virtual void print()
	{
		cout << "调用基类的print方法" << endl;
	}
};

class Derived : public Base
{
public:
	//无论是否添加virtual关键字，它都是一个虚函数
	//参数个数、参数类型、返回类型、函数名都与基类中的print函数一致。 重写
	//一般情况下，为了强调为虚函数，还是会添加上关键字virtual
	virtual void print()
	{
		cout << "调用派生类的print方法" << endl;
	}
};

//后定义的派生类
class Derived1 : public Base
{
public:
	virtual void print()
	{
		cout << "调用派生类D1的print方法" << endl;
	}
};

//先定义的函数
void print1(Base& b)
{
	b.print();
}

int main()
{
	Base b1;
	Derived d1;
	b1.print(); //调用基类的print方法
	d1.print();  //调用派生类的print方法
	d1.Base::print(); //调用基类的print方法

	////未使用虚函数时，无法实现多态，都调用的是基类的print方法
	//Base *pb = &b1;
	//pb->print(); //调用基类的print方法
	//pb = &d1;
	//pb->print(); //调用基类的print方法

	//使用虚函数时，可以实现多态，会根据定义的指针指向的对象的类型，去调用不同的类中的同名方法
	//一个接口，多种实现
	Base* pb = &b1;
	pb->print(); //调用基类的print方法
	pb = &d1;
	pb->print(); //调用派生类的print方法

	//使用基类的对象的引用作为参数，根据传递的实参的类型，去选择调用的函数。
	print1(b1);
	print1(d1);

	//可以使用未来
	Derived1 d2;
	print1(d2);
	return 0;
}

