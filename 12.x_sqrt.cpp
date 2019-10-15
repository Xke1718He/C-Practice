//
// Created by hexi on 2019/10/12.
//
#include <iostream>
using namespace std;

int x_sqrt(int num)
{
    int left=0;
    int right=num;
    int ans;
    while(left<right)
    {
        int mid=left+(right-left)/2;
        if(num/mid>=mid)
            left=mid+1;
        else
            right=mid;
    }
    return right-1;
}
int main()
{
    cout<<"请输入一个数：　"<<endl;
    int num1,num2;
    cin>>num1;
    num2=x_sqrt(num1);
    cout<<"结果为：　"<<num2<<endl;
    return 0;
}
