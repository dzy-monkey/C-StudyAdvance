/*
函数指针
*/
#include <iostream>
#include <string>

using namespace std; 
bool lengthCompare(const string& s1, const string& s2);
int main()
{
    string name1 = "sandy";
    string name2 = "Jane";
    //正常调用方式
    bool res = lengthCompare(name1, name2);
    //函数指针的定义和赋值
    bool(*pf)(const string&, const string&);
    pf = lengthCompare;
    res = pf(name1, name2);
    if (res == true)
    {
        cout << name1 << "长度大于" << name2 << endl;
    }
    else
    {
        cout << name1 <<"长度小于" << name2 << endl;
    }
}

bool lengthCompare(const string& s1, const string& s2) {
    return size(s1) > size(s2) ? true : false;
}
