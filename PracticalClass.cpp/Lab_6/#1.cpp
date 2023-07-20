//Program with three classes Student, Test and Result by using multilevel inheritance

#include<iostream>
using namespace std;
class Student
{
    public:
    int roll;
    char name[20];
    void stdInfo()
    {
        cout<<"Enter roll no:"<<endl;
        cin>>roll;
        cout<<"Enter name"<<endl;
        cin>>name;
    }

    void showInfo()
    {
        cout<<"--- Result Marksheet ---"<<endl;
        cout<<"Student's Name:"<<name<<endl;
        cout<<"Roll Number:"<<roll<<endl;
    }
};

class Test:public Student
{
    public:
    int sub1,sub2,sub3;
    int total;
    float perc;
    void getData()
    {
        cout<<"Enter marks of 1st subject:"<<endl;
        cin>>sub1;
        cout<<"Enter marks of 2nd subject:"<<endl;
        cin>>sub2;
        cout<<"Enter marks of 3rd subject:"<<endl;
        cin>>sub3;
    }

    void showData()
    {
        cout<<"***** Marks *****"<<endl;
        cout<<"1st subject:"<<sub1<<endl;
        cout<<"2nd subject:"<<sub2<<endl;
        cout<<"3rd subject:"<<sub3<<endl;
        cout<<"******************"<<endl;
    }

};

class Result:public Test
{
    public:
    void CalcResult()
    {
        total=sub1+sub2+sub3;
        perc=(total)/3.00;
        cout<<"Total marks="<<total<<endl;
        cout<<"Percentage="<<perc<<"%"<<endl;
        cout<<"-----------------"<<endl;
    }
};

int main()
{
    Result rt;
    int num,i;
    cout<<"Enter the number of students:"<<endl;
    cin>>num;
    for(i=0;i<num;i++)
    {
        rt.stdInfo();
        rt.getData();
        rt.showInfo();
        rt.showData();
        rt.CalcResult();
    }
    return 0;
}