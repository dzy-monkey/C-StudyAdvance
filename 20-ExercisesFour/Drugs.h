#pragma once
#ifndef DRUGS_H_
#define DRUGS_H_
#include <iostream>
#include <string>
using namespace std;
enum Type
{
	PlusHP,
	PlusMP
};

class Drugs
{
public:
	Drugs(string name,Type type,int count,float buyPrice);
	Drugs();
	~Drugs();
	void buyDrug(float& money, int num);
	void sellDrug(float& money, int num);
	void showDrug();
	string showType();
private:
	string name_;
	Type type_;
	int count_;
	float buyPrice_;
	float sellPrice_;
	static constexpr float Ratio = 0.75;
};

#endif // !DRUGS_H_


