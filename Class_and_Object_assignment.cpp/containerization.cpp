#include<iostream>
using namespace std;
class a
{
    public:
    int data;
    void getData()
    {
        cout<<"Enter data:"<<endl;
        cin>>data;
    }
    void showData()
    {
        cout<<"The data:"<<data<<endl;
    }

};


class b
{
    a A;
    int b;
    public:
    void getData()
    {
        A.getData();
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }
    void showData()
    {
        A.showData();
        cout<<"The value of b is"<<b<<endl;
    }
};

    

int main()
{
    b B;
    B.getData();
    B.showData();
}