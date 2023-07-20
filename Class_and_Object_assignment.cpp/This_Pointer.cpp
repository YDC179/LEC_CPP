#include<iostream>
using namespace std;

class A
{
    int x;
    public:
    void getnum(int x)
    {
        this->x=x;
        //cin>>x;
    }
    void shownum()
    {
        cout<<x<<endl;
    }
};

int main()
{
    A obj1;
    obj1.getnum(3);
    obj1.shownum();

    A obj2;
    obj2.getnum(5);
    obj2.shownum();
    return 0;

}