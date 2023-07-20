#include<iostream>
using namespace std;

class Base{
    private:
    int *age;

    public:
    Base()
    {
        cout<<"Base class called"<<endl;

    }

    ~Base()
    {
        cout<<"Base class end"<<endl;
    }

};

class Derived:public Base
{
    public:
    Derived()
    {
        cout<<"This is Derived Class"<<endl;
    }
    
    ~Derived()
    {
        cout<<"Class end"<<endl;
    }
};

int main()
{
    Base b1;
    Derived d1;
    return 0;
}