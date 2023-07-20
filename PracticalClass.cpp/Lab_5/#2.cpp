#include<iostream>
using namespace std;

class Time
{
    private:
    int hr,min,sec;

    public:
    Time()
    {
        hr=12;
        min=0;
        sec=0;
    }  

    Time(int x)
    {
        sec=x;
        hr=sec/3600;
        min=(sec%3600)/60;
        sec=(sec%3600)%60;
    }
    Time(Time &x)
    {
        hr=x.hr;
        min=x.min;
        sec=x.sec;
    }

    void Display()
    {
        cout<<hr<<" hours "<<min<<" minutes "<<sec<<" seconds "<<endl;
    }
};

int main()
{
    int s;
    cout<<"Enter seconds:";
    cin>>s;
    Time t1(s),t2;
    t1=t2;
    t2.Display();
    return 0;
}