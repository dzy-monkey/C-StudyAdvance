#include "Drugs.h"

Drugs::Drugs(string name, Type type, int count, float buyPrice)
{
	name_ = name;
	type_ = type;
	count_ = count;
	buyPrice_ = buyPrice;
	sellPrice_ = buyPrice * Ratio;
}

Drugs::Drugs()
{
}

Drugs::~Drugs()
{
}

void Drugs::buyDrug(float& money, int num)
{
	if (num > 0)
	{
		if (buyPrice_ * num <= money)
		{
			money -= buyPrice_ * num;
			count_ += num;
			cout << "购买成功！！" << endl;
		}
		else
		{
			cout << "警告：您的钱不够买" << num << "个药物" << endl;
		}
	}
	else
	{
		cout << "输入有误" << endl;
	}
}

void Drugs::sellDrug(float& money, int num)
{
	if (num > 0)
	{
		if (num <= count_)
		{
			count_ -= num;
			money += sellPrice_ * num;
			cout << "卖出成功" << endl;
		}
		else
		{
			cout << "警告：您没有" << num << "个药物可以卖出" << endl;
		}
	}
}

void Drugs::showDrug()
{
	cout << "药物名称:" << name_ << " 数量" << count_ << " 种类" << type_ << " 买入价格： "
		<< buyPrice_ << " 卖出价格：" << sellPrice_ << endl;
}

string Drugs::showType()
{
	if (type_==0)
	{
		return "PlusHP";
	}
	else
	{
		return "PlusMP";
	}
}
