// Create course

#include<iostream>
using namespace std;
class Course
{
    public:
};

class Mathematics:public Course
{
    public:
};

class Science:public Course 
{
    public:
};

class Engineering:public Course
{
    public:
};

class Physics:public Science
{
    public:
};

class Chemistry:public Science
{
    public:
};

int main()
{
    return 0;
}