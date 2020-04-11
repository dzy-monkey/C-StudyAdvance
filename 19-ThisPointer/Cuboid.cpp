#include "Cuboid.h"

Cuboid::Cuboid(double length, double width, double height)
{
	length_ = length;
	width_ = width;
	height_ = height;
}

Cuboid::Cuboid()
{
}

Cuboid::~Cuboid()
{
}

int Cuboid::compare(Cuboid& c)
{
	if (this->volume() > c.volume())
	{
		return 0;
	}
	else if (this->volume() == c.volume())
	{
		return 1;
	}
	else
	{
		return 2;
	}

}
