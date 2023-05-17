#include<iostream>
using namespace std;
class Room{ 
    public:
    int length, breadth, height;
    void get(){
        cout<<"Enter length breadth and height:";
        cin>>length>>breadth>>height;
    }
    void calculateArea()
    {
        cout<<"The area of room is "<<length*breadth;
    }
    void calculateVolume()
    {
        cout<<"The volume of room is "<<length*breadth*height;
    }
};

int main()
{
    Room obj401;
    obj401.get();
    obj401.calculateArea();
    obj401.calculateVolume();
}