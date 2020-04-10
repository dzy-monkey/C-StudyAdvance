/*
习题3
*/
#include "drug.h"
#include<iostream>

int main()
{
	Drug mpDrug = { "回魔药水", PlusMP, 10, 150, sellPrice(mpDrug) };
	Drug hpDrug = { "回血药水", PlusHP, 20, 100, sellPrice(hpDrug) };
	float totalMoney = 1000;

	cout << "1:购买回血药水 / 2:购买回魔药水 / 3：卖出回血药水 / 4：卖出回魔药水 / 5：显示目前拥有的药水与金钱的数量 / 6：退出" << endl;
	cout << "请输入操作： " << endl;
	int input = 0;
	int num = 0;
	while (cin >> input && input > 0 && input < 6)
	{
		if (input == 1)
		{
			cout << "请输入购买数量：" << endl;
			if (cin >> num && num > 0)
			{
				buyDrug(hpDrug, totalMoney, num);
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
			if (cin >> num && num > 0)
			{
				buyDrug(mpDrug, totalMoney, num);
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
			if (cin >> num && num > 0)
			{
				sellDrug(hpDrug, totalMoney, num);
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
			if (cin >> num && num > 0)
			{
				sellDrug(mpDrug, totalMoney, num);
				cout << "请继续输入操作： " << endl;
			}
			else
			{
				cout << "输入错误，请重新输入： " << endl;
			}
		}
		else
		{
			display(hpDrug, mpDrug, totalMoney);
			cout << "请继续输入操作： " << endl;
		}

	}
	return 0;
}