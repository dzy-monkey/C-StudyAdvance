/*
习题2
*/
#include <iostream>
using namespace std;

int fill_scores(int arr[], const int n);
void print_scores(int arr[], int n);
float average(int arr[], int n);

int main()
{
	const int maxSize = 10;
	int scores[maxSize] = {};
	//调用函数，填充数组，获取输入个数
	int size = fill_scores(scores, maxSize);
	print_scores(scores, size);
	float ave = average(scores, size);
	cout << "平均数：" << ave << endl;
}

int fill_scores(int arr[], const int n) {
	int temp;
	int i = 0;
	cout << "请输入最多10个射击成绩：" << endl;
	//判断输入的数字个数是否小于等于0
	while (i < n)
	{
		cin >> temp;
		//判断数据是否大于0
		if (temp >= 0)
		{
			arr[i] = temp;
			i++;

		}
		else
		{
			break;
		}
	}
	if (i == 9)
	{
		cout << "已输入10个分数" << endl;
	}
	//将输入的数字个数返还
	return i;
}

void print_scores(int arr[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ": " << arr[i] << endl;
	}
}

float average(int arr[], int n) {
	float res = 0;
	for (int i = 0; i < n; i++)
	{
		res += arr[i];
	}
	return res / n;
}