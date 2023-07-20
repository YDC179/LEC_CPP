#include<iostream>
using namespace std;

void display()
{
    int static i=1;
    i=i+3;
    cout<<"\n Value of i is "<<i;
}
int main()
{
    display();
    display();
    return 0;
}