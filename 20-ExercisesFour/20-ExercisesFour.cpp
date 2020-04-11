/*
习题4
*/
#include "Drugs.h"

int main()
{
	const int size = 2;
	Drugs drugs[size];
	drugs[0] = Drugs("大血药水", PlusHP, 20, 100);
	drugs[1] = Drugs("大魔药水", PlusMP, 10, 150);
	float totalMoney = 1000;
	cout << "1:购买回血药水 / 2:购买回魔药水 / 3：卖出回血药水 / 4：卖出回魔药水 / 5：显示目前拥有的药水与金钱的数量 / 6：退出" << endl;
	cout << "请输入操作" << endl;
	int input = 0;
	int number = 0;
	while (cin >> input && input > 0 && input < 6)
	{
		if (input == 1)
		{
			cout << "请输入购买数量：" << endl;
			if (cin >> number && number > 0)
			{
				drugs[0].buyDrug(totalMoney, number);
				cout << "请继续输入操作： " << endl;
			}
			else
			{
				cout << "输入错误，请重新输入： " << endl;
			}
		}
		else if (input == 2)
		{
			cout << "请输入购买数量：" << endl;
			if (cin >> number && number > 0)
			{
				drugs[1].buyDrug(totalMoney, number);
				cout << "请继续输入操作： " << endl;
			}
			else
			{
				cout << "输入错误，请重新输入： " << endl;
			}
		}
		else if (input == 3)
		{
			cout << "请输入卖出数量：" << endl;
			if (cin >> number && number > 0)
			{
				drugs[0].sellDrug(totalMoney, number);
				cout << "请继续输入操作： " << endl;
			}
			else
			{
				cout << "输入错误，请重新输入： " << endl;
			}
		}
		else if (input == 4)
		{
			cout << "请输入卖出数量：" << endl;
			if (cin >> number && number > 0)
			{
				drugs[1].sellDrug(totalMoney, number);
				cout << "请继续输入操作： " << endl;
			}
			else
			{
				cout << "输入错误，请重新输入： " << endl;
			}
		}
		else
		{
			cout << "目前拥有的药品：" << endl;
			for (int i = 0; i < size; i++)
			{
				cout << i + 1 << ": " << endl;
				drugs[i].showDrug();
			}
			cout << "拥有的金钱数:" << totalMoney << endl;
			cout << "请继续输入操作： " << endl;
		}
	}
}

