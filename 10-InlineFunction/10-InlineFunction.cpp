/*
内联函数
能提高运行速度，但是要占用更多的内存
*/
#include <iostream>
using namespace std;
inline int sum(int a, int b) { return a + b; }

int main()
{
	int res = sum(30, 40); 
}
 
