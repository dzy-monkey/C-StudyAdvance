#include "drug.h"
#include <iostream>

void buyDrug(Drug& d, float& money, int num)
{
	if (money >= d.buyPrice * num)
	{
		money -= d.buyPrice * num;
		d.count += num;
		cout << "购买成功！" << endl;
	}
	else
	{
		cout << "警告：拥有的钱不足够购买" << num << "个药物！！！" << endl;
	}
}

void sellDrug(Drug& d, float& money, int num)
{
	if (d.count >= num)
	{
		d.count -= num;
		money += d.sellPrice * num;
		cout << "卖出成功！" << endl;
	}
	else
	{
		cout << "警告：没有" << num << "个药物可以售卖！！！" << endl;
	}
}

void display(const Drug& d1, const Drug& d2, const float money)
{
	cout << "目前拥有的药物： " << endl;
	cout << "1:名称： " << d1.name << "  数量： " << d1.count << "  种类: " << showType(d1)
		<< "  购入价格： " << d1.buyPrice << "  卖出价格: " << d1.sellPrice << endl;
	cout << "2:名称： " << d2.name << "  数量： " << d2.count << "  种类: " << showType(d2)
		<< "  购入价格： " << d2.buyPrice << "  卖出价格: " << d2.sellPrice << endl;
	cout << "拥有钱数： " << money << endl;
	cout << "显示完成！" << endl;
}

string showType(const Drug& d)
{
	switch (d.type)
	{
	case 0:
		return "PlusHP";
		break;
	case 1:
		return "PlusMP";
		break;
	default:
		break;
	}
}

