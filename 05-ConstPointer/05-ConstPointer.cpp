/*
const的形参与实参

顶层const:表示任意的对象是常量
底层const:与指针和引用等复合类型有关
对指针而言，顶层const表示指针本身是个常量，而底层const表示指针所指的对象是一个常量
*/

#include <iostream>
using namespace std;
int cube1(int i);
int cube2(const int i);
int pCube1(int* pi);
int pCube2(const int* pi);
int pCube3(int* const pi);
int rCube1(int& r);
int rCube2(const int& r);

int main()
{
	//num1为int类型的变量，可以修改它的值
	//num2为int类型的常量，不可以修改它的值
	int num1 = 10;
	const int num2 = 10;
	num1 = 20;
	//num2 = 20; 正常情况下常量不可改变

	//普通指针可以修改p1的值，也可以通过修改*p1来修改num1的值
	//所以只能用int类型的数据来初始化，不能用const int 类型，不能修改常量的值
	int* p1 = &num1;
	//int* p2 = &num2;//出错

	//底层const,可以修改指针(p3,p4)，但是不可以通过*p3,*p4去修改num1,num2的值
	//可以使用int 类型 或者const int类型的数据来初始化
	const int* p3 = &num1;
	const int* p4 = &num2;

	//顶层const 不可以修改指针(p5,p6)但是可以通过*p5去修改num1的值
	//所以只能使用int类型的数据来初始化，不能const int 类型
	int* const p5 = &num1;
	//int* const p6 = &num2; 

	//int类型的引用，可以通过r1去修改num1的值，所以只能用int类型去初始化，不能使用const int 类型
	int& r1 = num1;
	//int& r2 = num2; 错误

	//const int 类型的引用，不能修改r3,r4的值
	//可以使用int类型的数据来初始化，也可以使用const int 类型
	const int& r3 = num1;
	const int& r4 = num2;
	//实参为int类型或者const int类型
	cout << cube1(num1) << cube1(num2) << endl;
	cout << cube2(num1) << cube2(num2) << endl;

	//实参只能为int 类型
	cout << pCube1(&num1) << endl;
	//实参可以是int类型，也可以是const int类型
	cout << pCube2(&num2) << endl;
	//实参只能是int类型
	cout << pCube3(&num1) << endl;

	cout << rCube1(num1) << endl;
	//cout << rCube1(num2) << endl; 报错

	cout << rCube2(num1) << " " << rCube2(num2) << endl;
}

int cube1(int i) {
	i = 0;
	return i * i * i;
}

int cube2(const int i) {
	//i = 0; 报错
	return i * i * i;
}

int pCube1(int* pi) {
	*pi = 0;
	return *pi * (*pi) * (*pi);
}
//可以修改pi,但是不可以修改*pi,所以实参只能是Int类型
int pCube2(const int* pi) {
	//*pi = 0; 出错
	return *pi * (*pi) * (*pi);
}
//不可以修改pi，但是可以修改*pi
int pCube3(int* const pi) {
	//*pi = 0;
	return *pi * (*pi) * (*pi);
}
//可以修改r，实参类型只能是int类型
int rCube1(int& r) {
	r = r * r * r;
	return r * r * r;
}
//不可以修改r,实参类型可以是int类型，也可以是const int类型
int rCube2(const int& r) {
	//r = r * r * r; 出错
	return r * r * r;
}