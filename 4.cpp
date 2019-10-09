//
// Created by hexi on 2019/10/9.
//
/*
 * 有N条电线，每条电线两端是不同规格的接口（a/b/c/d...）,同一根电线两端的接口规格可能是不同的，只有相同规格的接口才能把两根电线连接在一起，设计一个程序，判断所有这些电线是否能合并为一根长电线。

输入:N行，每行是两个字符串，表示电线的规格，如：

a a

a b

b c

输出：是否能拼接为一根电线。
 */
#include <iostream>
#include <set>
#include <vector>
using namespace std;
struct line{
    char a;
    char b;
    bool operator <(const line &num) const
    {
        if(this->a!=num.a)
        {
           if(this->a<num.a)
           {
               return true;
           } else
               return false;
        }
        else
        {
            if(this->b!=num.b)
            {
                if(this->b<num.b)
                    return true;
                else
                    return false;
            } else
            {
                return true;
            }
        }

    }
};
bool panduan(set<line> line1)
{
    vector<line> vec;
    for(set<line>::iterator it=line1.begin();it!=line1.end();it++)
    {
        vec.push_back(*it);
    }
    vector<line>::iterator iF;
    for(vector<line>::iterator it=vec.begin(),iF=it+1;iF!=vec.end();it++,iF++)
    {
        cout<<(*it).a<<" "<<(*it).b<<endl;
        cout<<"******"<<endl;
        cout<<(*iF).a<<" "<<(*iF).b<<endl;
        if((*it).b!=(*iF).a)
        {
            return false;
        }

    }
    return true;
}
int main()
{
    int n;
    line line1;
    set<line> set1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>line1.a>>line1.b;
        set1.insert(line1);
    }
    for(set<line>::iterator it=set1.begin();it!=set1.end();it++)
    {
        cout<<(*it).a<<" "<<(*it).b<<endl;
    }
    if(panduan(set1))
    {
        printf("1");
    } else
        printf("0");
    return 0;
}
