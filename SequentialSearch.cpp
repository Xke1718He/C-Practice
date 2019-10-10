//
// Created by hexi on 19-9-18.
//顺序查找
//
#include <iostream>
using namespace std;
typedef struct student
{
    unsigned  int id;
    char name[10];
    int score;
}Student;
int searchinfo(Student *stu,int num,int id)
{
    for(int i=0;i<num;i++)
    {
        if(stu[i].id==id)
            return i;
    }
    return -1;
}
int main()
{
    Student stu[4]={{1004,"TOM",100},
                    {1002," LILY",95},
                    {1001,"ANN",93},
                    {1003,"luCY",98}};
    int address;
    address=searchinfo(stu,4,1001);
    std::cout<<"ID: "<<stu[address].id<<std::endl;
    std::cout<<"name: "<<stu[address].name<<std::endl;
    std::cout<<"score: "<<stu[address].score<<std::endl;
    return  0;
}
