//
// Created by hexi on 19-9-2.
//
#include <iostream>
using namespace std;
//最大公约数
int gcd(int num1,int num2)
{
    int t=num1%num2;
    while(t!=0)
    {
        num1=num2;
        num2=t;
        t=num1%num2;
    }
    return num2;
}
//最小公倍数
int lcm(int num1,int num2)
{
    return num1*num2/gcd(num1,num2);
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    int num_gcd=gcd(num1,num2);
    cout<<"最大公约数: "<<num_gcd<<endl;
    int num_lcm=lcm(num1,num2);
    cout<<"最小公倍数: "<<num_lcm<<endl;

    return 0;
}
