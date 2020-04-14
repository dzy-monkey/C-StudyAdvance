/*
类模板
泛型类
*/
#include <iostream>

using namespace std;

//类模板
template <typename T>
class Cube
{
private:
	T a_;
public:
	Cube(T a = 0)
	{
		a_ = a;
	}
	~Cube() {}
	T area()
	{
		return a_ * a_ * 6;
	}
	T volumn();
};

//在类模板外部定义成员函数时， 需要加上模板说明，在类名后面加上<T>
template<typename T>
T Cube<T>::volumn()
{
	return a_ * a_ * a_;
}

int main()
{
	//在定义对象时，要为类型形参T，显式地指定类型实参
	//类型实参 --- int
	Cube<int> cube1(2);
	cout << cube1.area() << endl;
	cout << cube1.volumn() << endl;
	//类型实参 --- double
	Cube<double> cube2(1.5);
	cout << cube2.area() << endl;
	cout << cube2.volumn() << endl;
	return 0;
}