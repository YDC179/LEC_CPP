// nested if else
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number:";
    cin>>num;

    if(num!=0)
    {
        if (num<0)
        {
            cout<<"Number is negative";
        }
        else
        {
            cout<<"Number is positive";
        }
    }

    else 
    {
        cout<<"Input number is zero";
    }

    return 0;
}