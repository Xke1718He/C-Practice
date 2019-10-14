//
// Created by hexi on 2019/10/9.
//
#include <iostream>
using namespace std;
int main()
{
    int num,NewNum;
    printf("请输入一个三位数： \n");
    cin>>num;
    NewNum=num/100+((num%100)/10)*10+(num%10)*100;
    cout<<"翻转结果为： "<<NewNum<<endl;
    return 0;
}
