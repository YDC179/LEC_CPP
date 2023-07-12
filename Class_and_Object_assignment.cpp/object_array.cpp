#include<iostream>
using namespace std;

class Student
{
    string name;
    public:
    void getname()
    {
        cout<<"Enter name of student"<<endl;
        cin>>name;
    }

    void showname()
    {
        cout<<"The name is:"<<name<<endl;
    }
};

int main()

{
    int n;
    Student s[20];
    for(n=0;n<5;n++)
    {
        s[n].getname();
    }
    for (n=0;n<5;n++)
    {
        s[n].showname();
    }
    return 0;
}
