/*
习题6
重载
重定义
重写
 */

#include<iostream>

using namespace std;
//基类：  技能类，存储各职业公有的属性和方法
//抽象类：包含纯虚函数，抽象类是根据纯虚函数来决定的
class Career
{
protected:
	int hp_;
	int mp_;
	int res_;
	int def_;
public:
	Career()
	{
		hp_ = 0;
		mp_ = 0;
		res_ = 0;
		def_ = 0;
	}
	Career(int hp, int mp, int res, int def)
	{
		hp_ = hp;
		mp_ = mp;
		res_ = res;
		def_ = def;
	}
	~Career() {}

	void normalAttack()
	{
		cout << "使用了普通攻击" << endl;
	}
	//纯虚函数
	virtual void skill() = 0;
};

//派生类： 战士
class Warrior : public Career
{
private:
	int atn_;
public:
	Warrior() : Career()
	{
		atn_ = 0;
	}
	Warrior(int hp, int mp, int res, int def, int atn) : Career(hp, mp, res, def)
	{
		atn_ = atn;
	}
	~Warrior() {}

	virtual void skill()
	{
		cout << "战士使用了技能：刀斩" << endl;
	}
};

//派生类：法师
class Mage : public Career
{
private:
	int Int_;
public:
	Mage() : Career()
	{
		Int_ = 0;
	}
	Mage(int hp, int mp, int res, int def, int Int) : Career(hp, mp, res, def)
	{
		Int_ = Int;
	}
	~Mage() {}
	virtual void skill()
	{
		cout << "法师使用了技能：火球术" << endl;
	}
};

//派生类：牧师
class Priest : public Career
{
private:
	int Int_;
public:
	Priest() : Career()
	{
		Int_ = 0;
	}
	Priest(int hp, int mp, int res, int def, int Int) : Career(hp, mp, res, def)
	{
		Int_ = Int;
	}
	~Priest() {}
	virtual void skill()
	{
		cout << "牧师使用了技能：治疗术" << endl;
	}
};

void skill1(Career& career)
{
	career.skill();
}

int main()
{
	//战士
	Warrior warrior1(100, 0, 200, 100, 350);
	//法师
	Mage mage1(100, 100, 100, 200, 410);
	//牧师
	Priest priest1(100, 150, 120, 210, 380);

	warrior1.normalAttack();
	skill1(warrior1);

	mage1.normalAttack();
	skill1(mage1);

	priest1.normalAttack();
	skill1(priest1);


	return 0;
}

