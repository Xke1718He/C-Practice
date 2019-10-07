//
// Created by hexi on 2019/10/7.
//字符类型统计器
//
#include<iostream>
using namespace std;
int main()
{
    int space=0,table=0,enter=0;
    char c;
    printf("please input a string: \n");
    while(scanf("%c",&c)&&c!='q')
    {
        switch (c)
        {
            case 32:
                space++;
                break;
            case 9:
                table++;
                break;
            case 10:
                enter++;
                break;
            default:
                break;
        }

    }
    printf("The number of space: %d\n",space);
    printf("The number of table: %d\n",table);
    printf("The number of enter: %d\n",enter);
    return 0;
}
