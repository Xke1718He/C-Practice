//
// Created by hexi on 2019/10/10.
//最长回文字符串
#include <iostream>
#include <string>
using namespace std;

string Palindrome(string &s,int l,int r)
{
    while((l>=0)&&(r<s.size()))
    {
        if(s[l]!=s[r])
            break;
        l--;
        r++;
    }
    return s.substr(l+1,r-l-1);
}
int main()
{
    string s;
    printf("请输入一个字符串：　\n");
    cin>>s;
    string news1,news2,res;
    for(int i=0;i<s.size();i++)
    {
        news1=Palindrome(s,i,i);
        news2=Palindrome(s,i,i+1);
        res=res.size()>news1.size()?res:news1;
        res=res.size()>news2.size()?res:news2;
    }
    cout<<res<<endl;
    return 0;
}
