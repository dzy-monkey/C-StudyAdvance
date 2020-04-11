#include "Student.h"

Student::Student(string name, int chinese, int math, int english)
{
	name_ = name;
	chinese_ = chinese;
	math_ = math;
	english_ = english;
}

Student::~Student()
{
}

int Student::sum(const Student& s)
{
	return s.chinese_ + s.math_ + s.english_;
}

float Student::avery(const Student& s)
{
	return (float)(s.chinese_ + s.math_ + s.english_) / 3;
}

bool Student::pass(const Student& s)
{
	if (s.chinese_ >= PassingScore && s.math_ >= PassingScore && s.english_ >= PassingScore)
	{
		return true;
	}
	else
	{
		return false;
	}
}

string Student::getName(Student& s)
{
	return s.name_;
}
//友元函数
void printMath(Student& s)
{
	cout << "数学成绩为:" << s.math_ << endl;
}
