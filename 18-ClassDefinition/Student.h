#pragma once
#ifndef STUDENT_H_
#include <iostream>
#include <string>
using namespace std;
//class�ؼ��ֺ�����
class Student
{
	//Student�����Ԫ�����������������ĺ�����Ա
	friend void printMath(Student& s);
//���нӿ�
public:
	//���캯�� ���ڳ�ʼ������������ص����ݳ�Ա
	Student(string name, int chinese, int math, int english);
	//��������:
	//1.�ù��캯����������󣬳�������ٸö���ֱ�������Ϊֹ
	//2.�������ʱ�������Զ�����һ������ĳ�Ա�������������������������
	//3.���û���ṩ��������������������ʽ������һ��Ĭ���������������ڷ��ֵ��¶���ɾ���Ĵ�����ṩĬ�����������Ķ���
	~Student();
	int sum(const Student& s);
	float avery(const Student& s);
	bool pass(const Student& s);
	string getName(Student & s);

//˽�г�Ա���������ݳ�Ա��ֻ��ͨ�����нӿڽ��з��ʣ���������
private:
	string name_;
	int chinese_;
	int math_;
	int english_;
	static const int PassingScore = 60;
};


#endif // !STUDENT_H_
