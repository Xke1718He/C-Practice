//
// Created by hexi on 2019/10/12.
//
#include <iostream>
#include <algorithm>
using namespace std;

int trap(int num[],int n)
{
    int slow=0;
    int fast=1;
    int sum=0;
    int count=0;
    int temp=0;
    while(fast<n)
    {

        if(num[slow]>num[fast])
        {
            temp+=num[slow]-num[fast];
            printf("count: %d,slow: %d,num[slow]: %d,fast: %d,num[fast]: %d,temp: %d\n",count,slow,num[slow],fast,num[fast],temp);
        }
        else
        {
            sum+=temp;
            temp=0;
            slow++;
            slow=fast;
        }
        fast++;
        count++;
    }
    return sum;
}
/*
int trap(int num[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int max_left=0;
        for(int j=i-1;j>=0;j--)
        {
            if(num[j]>max_left)
                max_left=num[j];
        }
        int max_right=0;
        for(int j=i+1;j<n;j++)
        {
            if(num[j]>max_right)
                max_right=num[j];
        }
        int min1= min(max_left,max_right);
        if(min1>num[i])
        {
            sum+=(min1-num[i]);
        }
    }
    return sum;
}

int trap(int height[],int n)
{
    int left=0,right=n-1;
    int lefth=0,righth=0,area=0;
    while(left<right)
    {
        if(height[left]<height[right])
        {
            if(lefth<=height[left])
                lefth=height[left];
            else
                area+=lefth-height[left];
            left++;
        }
        else
            {
                if(righth<=height[right])
                    righth=height[right];
                else
                    area+=righth-height[right];
                right--;
            }
        }
    return area;
}
*/
int main()
{
    cout<<"请输入柱子的个数：　\n";
    int n;
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    int trap_num;
    trap_num=trap(num,n);
    cout<<"总和为：　"<<trap_num<<endl;
    return 0;
}
