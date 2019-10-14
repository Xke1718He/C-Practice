//
// Created by hexi on 2019/10/10.
//三个整数排序
//
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    int t;
    if(num1>num2)
    {
        t=num1;
        num1=num2;
        num2=t;
    }
    else if(num2>num3)
    {
        t=num2;
        num2=num3;
        num3=t;
    }
    else if(num1>num3)
    {
        t=num1;
        num1=num3;
        num3=t;
    }
    cout<<num1<<" "<<num2<<" "<<num3<<endl;

    return 0;
}
