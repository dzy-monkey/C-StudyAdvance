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
			cout << "����ɹ�����" << endl;
		}
		else
		{
			cout << "���棺����Ǯ������" << num << "��ҩ��" << endl;
		}
	}
	else
	{
		cout << "��������" << endl;
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
			cout << "�����ɹ�" << endl;
		}
		else
		{
			cout << "���棺��û��" << num << "��ҩ���������" << endl;
		}
	}
}

void Drugs::showDrug()
{
	cout << "ҩ������:" << name_ << " ����" << count_ << " ����" << type_ << " ����۸� "
		<< buyPrice_ << " �����۸�" << sellPrice_ << endl;
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
