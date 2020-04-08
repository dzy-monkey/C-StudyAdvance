/*
指针参数
*/
#include <iostream>
using namespace std;

int reSet(int i);
void reSet2(int* pi);

int main()
{
	int num = 10;
	cout << "reset:" << reSet(num) << endl;
	reSet2(&num);
	cout << "reset2:" << num << endl;
	cout << &num << endl;
}
//传递实参的实际值，将实参的值拷贝给形参，函数体中修改的是形参的值，对实参不产生任何影响
int reSet(int i) {
	i *= 2;
	return i;
}
//传递的是实参的地址，修改*pi的值，就是修改实参指向的对象的值，修改pi的值，是修改形参存储的地址，不影响实参的地址
void reSet2(int* pi) {
	*pi *= 2;
	pi = 0;
	cout << pi << endl;
}