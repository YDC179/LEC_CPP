#include<iostream>
using namespace std;
class Meow
{
    public:
    virtual void Panda()=0; //Pure virutal function

    void Tiger()
    {
        cout<<"I am a tiger"<<endl;
    } 
};

class Bhow:public Meow
{
    
}

int main()
{
    Meow *cat;

    return 0;
}