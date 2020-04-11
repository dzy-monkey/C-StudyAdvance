#pragma once
#ifndef STUDENT_H_
#include <iostream>
#include <string>
using namespace std;
//class关键字和类名
class Student
{
	//Student类的友元函数，但不是这个类的函数成员
	friend void printMath(Student& s);
//公有接口
public:
	//构造函数 用于初始化对象调用隐藏的数据成员
	Student(string name, int chinese, int math, int english);
	//析构函数:
	//1.用构造函数创建对象后，程序负责跟踪该对象，直到其过期为止
	//2.对象过期时，程序将自动调用一个特殊的成员函数，析构函数来完成清理工作
	//3.如果没有提供析构函数，编译器将隐式的声明一个默认析构函数，并在发现导致对象被删除的代码后，提供默认析构函数的定义
	~Student();
	int sum(const Student& s);
	float avery(const Student& s);
	bool pass(const Student& s);
	string getName(Student & s);

//私有成员，定义数据成员，只能通过公有接口进行访问，数据隐藏
private:
	string name_;
	int chinese_;
	int math_;
	int english_;
	static const int PassingScore = 60;
};


#endif // !STUDENT_H_
