#include "drug.h"
#include <iostream>

void buyDrug(Drug& d, float& money, int num)
{
	if (money >= d.buyPrice * num)
	{
		money -= d.buyPrice * num;
		d.count += num;
		cout << "����ɹ���" << endl;
	}
	else
	{
		cout << "���棺ӵ�е�Ǯ���㹻����" << num << "��ҩ�����" << endl;
	}
}

void sellDrug(Drug& d, float& money, int num)
{
	if (d.count >= num)
	{
		d.count -= num;
		money += d.sellPrice * num;
		cout << "�����ɹ���" << endl;
	}
	else
	{
		cout << "���棺û��" << num << "��ҩ���������������" << endl;
	}
}

void display(const Drug& d1, const Drug& d2, const float money)
{
	cout << "Ŀǰӵ�е�ҩ� " << endl;
	cout << "1:���ƣ� " << d1.name << "  ������ " << d1.count << "  ����: " << showType(d1)
		<< "  ����۸� " << d1.buyPrice << "  �����۸�: " << d1.sellPrice << endl;
	cout << "2:���ƣ� " << d2.name << "  ������ " << d2.count << "  ����: " << showType(d2)
		<< "  ����۸� " << d2.buyPrice << "  �����۸�: " << d2.sellPrice << endl;
	cout << "ӵ��Ǯ���� " << money << endl;
	cout << "��ʾ��ɣ�" << endl;
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

