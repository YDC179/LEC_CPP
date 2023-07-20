#include<iostream>
using namespace std;

class A{
  int a,b,c;
  public:
  A(int x, int y, int z)
  {
    a=x;
    b=y;
    c=z;
  }  

  void operator -()
  {
    a=-a;
    b=-b;
    c=-c;
  }

  void display()
  {
    cout<<a<<endl<<b<<endl<<c;
  }

};

int main()
{
    A a(-20,-30,-40);
    a;
    a.display();
    return 0;
}





