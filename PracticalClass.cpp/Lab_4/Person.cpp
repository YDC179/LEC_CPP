#include"Person.h"
#include<iostream>
using namespace std;
void chill::getdata()
{
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter age:"<<endl;
    cin>>age;
}

void chill::showdata()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
}
