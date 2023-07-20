#include<iostream>
using namespace std;

void display()
{
    int static i=1;
    i=i+5;
    cout<<"Value of i is "<<i<<endl;
}

int main()
{
     display();
     display();
    return 0;
}