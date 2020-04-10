/*
头文件中常包含的内容
1. 函数原型
2. 使用#define或const定义的符号常量
3. 结构声明
4. 类声明
5. 模板声明
6. 内联函数
*/
#pragma once
//防止重复定义
#ifndef TEST_H
#define TEST_H
#include <string>
using namespace std;

struct Game
{
	string gameName;
	float gameScore;
};

void printGameName(string name,float socre);

#endif // !TEST_H