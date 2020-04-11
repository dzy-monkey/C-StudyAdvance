/*
this指针
*/
#include "Cuboid.h"

int main()
{
	//对象数组的两种初始化方式 ☆ 
	/*Cuboid cs[2] = { {20,10,11},{11,26,9} };
	cs[0].compare(cs[1]);*/
	/*Cuboid cs[2] = {};
	cs[0] = Cuboid(1, 2, 3);
	cs[1] = Cuboid(2, 3, 4);
	int res1 = cs[0].compare(cs[1]);*/
	Cuboid c1(20, 10, 11);
	Cuboid c2(11, 26, 9);
	int res = c1.compare(c2);
	if (res == 0)
	{
		cout << "第一个长方体的体积大于第二个长方体的体积" << endl;
	}
	else if (res ==1)
	{
		cout << "两个长方体的体积相等" << endl;
	}
	else
	{
		cout << "第一个长方体的体积小于第二个长方体的体积" << endl;
	}
}

