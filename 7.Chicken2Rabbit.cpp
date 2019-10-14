//
// Created by hexi on 2019/10/9.
//鸡兔同笼
//
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    int chicken,rabbit;
    printf("请输入总数量和总腿数： \n");
    cin>>n>>m;
    chicken=(4*n-m)/2;
    rabbit=(m-2*n)/2;
    if(chicken<0||rabbit<0||m%2==1)
    {
        cout<<"NO answer"<<endl;
    }
    else
        cout<<"鸡："<<chicken<<" 兔: "<<rabbit<<endl;
    return 0;
}
