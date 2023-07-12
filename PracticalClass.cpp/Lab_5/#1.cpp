#include<iostream>
using namespace std;

class Complex
{
    private:
    const int real=5;
    int img;

    public:
    void getData(int x)
    {
       img=x;   
       cout<<img;
    } 

    void getReal(int y)
    {
        real=y;
        cout<<real;
    }
};

int main()
{
    Complex a;
    a.getData(5);
    a.getReal(15);
    return 0;
}