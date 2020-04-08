/*
返回引用类型
*/

#include <iostream>
using namespace std;
int& sum(int a, int b, int& res);

int main()
{
	int sum1 = 20;
	int sum2 = 10;
	int res = 0;
	sum(sum1, sum2, res);
	cout << res << endl;
	sum(sum1, sum2, res)++;
	cout << res << endl;

}

int& sum(int a, int b, int& res){
	res = a + b;
	return res;
}
