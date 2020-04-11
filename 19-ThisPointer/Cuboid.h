#pragma once
#include <iostream>
using namespace std;
#ifndef CUBOID_H_
#define CUBOID_H_
class Cuboid
{
public:
	Cuboid(double length,double width,double height);
	Cuboid();
	~Cuboid();
	double volume() { return length_ * width_ * height_; };
	int compare(Cuboid& c);
private:
	double length_;
	double width_;
	double height_;
};
#endif // !CUBOID_H_


