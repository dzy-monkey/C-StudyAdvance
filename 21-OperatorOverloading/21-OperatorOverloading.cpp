/*
运算符重载
运算符重载规则：
不可以被重载的运算符
.(成员访问运算符)
->(成员指针访问运算符)
::(域运算符)
sizeof(长度运算符)
?:(条件运算符)
#(预处理符号)

重载运算符时需要注意:
不改变运算符的优先级
不改变运算符的结合性
不改变运算符所需要的操作数
不能创建新的运算符

用成员函数或友元函数重载运算符的区别在于成员函数具有this指针，而友元函数没有this指针
*/

#include <iostream>
using namespace std;

class Count
{
public:
	Count(int mNum = 0, int fNum = 0);
	~Count();
	void print();
	//运算符重载+ ，计算2个类类型对象的男生人数总和 和女生人数总和
	//成员函数,参数列表中的参数比运算对象少一，this指针隐式的指向左侧的运算对象
	Count operator+(const Count& c);
	//友元函数，参数列表中的参数和运算对象个数相等
	friend Count operator+(const Count &c1,const Count &c2);
private:
	int mNum_;
	int fNum_;

};

Count::Count(int mNum, int fNum)
{
	mNum_ = mNum;
	fNum_ = fNum;
}

Count::~Count()
{
}

void Count::print()
{
	cout << "男生的人数为：" << mNum_ << " || 女生的人数为:" << fNum_ << endl;
}
//+号的运算符重载，成员函数的实现
Count Count::operator+(const Count& c)
{
	Count temp;
	temp.mNum_ = this->mNum_ + c.mNum_;
	temp.fNum_ = this->fNum_ + c.fNum_;
	
	return temp;
}
//友元函数的实现 
Count operator+(const Count& c1, const Count& c2)
{
	Count temp;
	temp.mNum_ = c1.mNum_ + c2.mNum_;
	temp.fNum_ = c1.fNum_ + c2.fNum_;
	return temp;
}
int main()
{
	Count c1 = Count(30, 45);
	c1.print();
	Count c2(25, 42);
	//运算符重载函数的调用 
	//1.使用函数名进行调用 
	//Count total1 = c1.operator+(c2);
	//2.和普通运算符一样使用1+2
	Count total1 = c1 + c2;
	total1.print();

	//使用函数名进行调用(友元函数)
	Count total2=operator+(c1, c2);
	total2.print();
}


