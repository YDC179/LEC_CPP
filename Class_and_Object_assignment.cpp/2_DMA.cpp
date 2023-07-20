#include<iostream>
using namespace std;

class Vehicle{
    private:
    int platenumber;

    public:
    int getnumber(){
        int a;
        cout<<"Enter the number of scooter:";
        cin>>a;
        platenumber=a;
        return platenumber;
    }
};

int main()
{
    Vehicle scooter; //object
    cout<<"Platenumber is:"<<scooter.getnumber();
}