/*
ͷ�ļ��г�����������
1. ����ԭ��
2. ʹ��#define��const����ķ��ų���
3. �ṹ����
4. ������
5. ģ������
6. ��������
*/
#pragma once
//��ֹ�ظ�����
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