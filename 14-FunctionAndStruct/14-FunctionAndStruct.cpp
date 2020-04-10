/*
函数与结构体
*/

#include <iostream>
using namespace std;

struct  WorkTime
{
    int hours;
    int mins;
};
WorkTime sum(WorkTime t1, WorkTime t2);
const int Mins_per_hour = 60;

int main()
{
    WorkTime moring = { 2,40 };
    WorkTime afternoon = { 6,40 };
    WorkTime day = sum(moring, afternoon);
    cout << "一天一共工作了" << day.hours << "小时," << day.mins << "分钟 " << endl;
}
//结构体在函数中可以和基本类型一样使用，作为参数传递或者是作为返回值返回
//结构体较大时，为了避免复制副本，可以使用指针或者引用类型
WorkTime sum(WorkTime t1, WorkTime t2) {
    WorkTime total;
    total.mins = (t1.mins + t2.mins) % Mins_per_hour;
    total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hour;
    return total;
}
