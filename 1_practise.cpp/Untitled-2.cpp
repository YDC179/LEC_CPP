#include<iostream>

namespace n1{
    int x=2;


    void fun()
    {
        std::cout<<"This is fun() of n1";
    }
}

namespace n2{
    int x=5;

    void fun()
    {
        std::cout<<"This is fun() of n2";
    }
}

int main()
{
    std::cout<<n1::x;

    n1::fun();

    std::cout<<n2::x;

    n2::fun();

    return 0;
}