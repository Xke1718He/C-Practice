//
// Created by hexi on 2019/10/11.
//判断闰年
//
#include <iostream>
using namespace std;
bool isLeapYear(int num)
{
    if((num%4==0)&&(num%100!=0)||(num%400==0))
        return true;
    else
        return false;
}
int main()
{
    int year;
    printf("请输出年份：　\n");
    cin>>year;
    if(isLeapYear(year))
        printf("是");
    else
        printf("否");

    return 0;
}
