/*
函数重载
*/
#include <iostream>
using namespace std;
void print(const char* cp);
void print(const int* beg, const int* end);
void print(const int ia[], size_t size);
int main()
{
	char c = 'a';
	//传递的实参是char类型的指针，所以会调用第一个函数
	print(&c);

	const size_t size = 5;

	int arr[size] = { 2,3,3 };
	//传递的实参是两个Int类型的指针，所以会调用第二个函数
	print(&arr[2], &arr[size - 1]);
	//传递的实参是数组和一个size_t类型的值，所以会调用第三个函数
	print(arr, size);
	//传递的实参是一个数组，但是没有和它相对应的参数列表的函数定义，所以会出错
	//print(arr);
}

void print(const char* cp) {
	cout << "1: " << *cp << endl;
}

void print(const int* beg, const int* end) {
	int length = end - beg;
	for (int i = 0; i <= length; i++)
	{
		cout << "2: " << *(beg + i) << endl;
	}
}

void print(const int ia[], size_t size) {
	for (int i = 0; i < size; i++)
	{
		cout << "3: " << ia[i] << endl;
	}
}