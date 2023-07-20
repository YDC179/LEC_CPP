#include<iostream>
using namespace std;

class A
{
    int x;

public:
A():
x(5){}

   void operator ++(int)
   {
    ++x;
   }

   void display()
   {
    cout<<"Prefix:"<<x<<endl;
   }
};

int main()
{
A a;
a.display();
return 0;
}