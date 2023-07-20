// Program to illustrate the use of namespace in C++

#include<iostream>
using namespace std;
namespace BEI
{
    char subject[20] ="Electronics";
    int studentno=45;
    void printSubject()
    {
        std::cout<<subject<<endl;
    }
    void printNumber()
    {
        std::cout<<studentno<<endl;
    }
}

namespace BCT
{
    char subject[20]="Computer";
    int studentno=28;
    void printSubject()
    {
        std::cout<<subject<<endl;
    }
    void printNum()
    {
        std::cout<<studentno<<endl;
    }
}

int main()
{
    using namespace BEI;
    using namespace BCT;
    BEI::printSubject();
    printNumber();
    BCT::printSubject();
    printNum();
    return 0;
}
