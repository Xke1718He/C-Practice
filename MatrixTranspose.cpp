//
// Created by hexi on 2019/10/14.
//
#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"请输入矩阵的行和列： \n";
    cin>>n>>m;
    int matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"原矩阵： \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<"矩阵的转置： \n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[j][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
