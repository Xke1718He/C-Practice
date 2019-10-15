//
// Created by hexi on 2019/10/11.
//有序数组去重
//
#include <iostream>
using namespace std;
int removeDuplicates(int num[],int length)
{
    int slow,fast;
    slow=0,fast=1;
    while(fast<length)
    {
        if(num[slow]==num[fast])
        {
            fast++;
        }
        else
        {
            slow++;
            num[slow]=num[fast];
            fast++;
        }

    }
    return slow+1;
}
int main()
{
    int n;
    printf("输入有序数组的长度：");
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    n=removeDuplicates(num,n);
    for(int i=0;i<n;i++)
    {
        cout<<num[i]<<" ";
    }
    return 0;

}
