// Program to swap the numbers using pointer variables

#include<iostream>
using namespace std;
void swap(int*a , int*b)
{
    int temp;
    temp= *a;
    *a=*b;
    *b= temp;
}
int getnum()
{
    int x;
    cout<<"Enter a number:"<<endl;
    cin>>x;
    return x;
}
int main()
{
    int a= getnum();
    int b= getnum();
    std::cout<<"Before swapping:"<<a<<", "<<b<<endl;
    swap(&a,&b);
    std::cout<<"After swapping:"<<a<<", "<<b;
    return 0;
}