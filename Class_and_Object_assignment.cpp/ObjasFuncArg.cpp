#include<iostream>
using namespace std;
class student
{
    int marks;
    student()
    {
        int a;
        a=marks;
    }

};

void Marks()
{
    student std1,std2;
    cout<<"Enter marks of Ram:"<<endl;
    cin>>std1;
    cout<<"Enter marks of Shyam:"<<endl;
    cin>>std2;
}


void calculateAvg(int S1, int S2)
{
    int avg;
    avg=(S1+S2)/2;
    cout<<"The average is:"<<avg<<endl;
}

int main()
{
    
}