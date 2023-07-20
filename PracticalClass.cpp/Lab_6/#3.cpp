#include<iostream>
using namespace std;
class Parent
{
    public:
    Parent()
    {
        cout<<"Parent constructor called"<<endl;
    }
    ~Parent()
    {
        cout<<"Parent destructor called "<<endl;
    }
};

class Child:public Parent
{
    public:
    Child()
    {
        cout<<"Child Constructor called"<<endl;
    }
    ~Child()
    {
        cout<<"Child Destructor called"<<endl;
    }
};

int main()
{
    Child c1;
}