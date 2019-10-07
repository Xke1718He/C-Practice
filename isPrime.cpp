//
// Created by hexi on 19-9-21.
//判断是否是素数
//
#include<iostream>
using namespace std;
bool isPrime(int num)
{
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
int main ()
{
    int n;
    cin>>n;
    for(int j=2;j<n;j++)
    {
        if(isPrime(j))
        {
            cout<<j;
            cout<<" ";
        }

    }

    return 0;
}
