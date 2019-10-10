//
// Created by hexi on 2019/10/9.
//
#include <iostream>
using namespace std;
void swap1(int &a,int &b)
{
    int t;
    t=a;
    a=b;
    b=t;
}
void swap2(int &a,int &b)
{
    a= a+b;
    b= a-b;
    a= a-b;
}
int main()
{
    int a,b;
    printf("请输入两个整数： \n");
    cin>>a>>b;
    swap1(a,b);
    cout<<"结果1为："<<a<<" "<<b<<endl;
    swap2(a,b);
    cout<<"结果2为："<<a<<" "<<b<<endl;
    return 0;
}
