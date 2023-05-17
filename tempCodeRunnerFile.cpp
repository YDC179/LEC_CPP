#include<iostream>
using namespace std;
class Room{ 
    public:
    int length, breadth, height;
    double calculateArea()
    {
        return length * breadth;
    }
    double calculateVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Room obj401;
    obj401.length = 10; 
    obj401.breadth=20;
    obj401.height= 50;

    cout<<"The area of room is "<<obj401.calculateArea()<<endl;
    cout<<"The volume of room is "<<obj401.calculateVolume()<<endl;
}