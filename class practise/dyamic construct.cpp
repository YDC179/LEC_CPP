//dy_const.cpp

//example of dynamic constructor

#include<iostream>
#include<cstring>
using namespace std;
 class testdycons
{
private:

char *str;

public:

testdycons ()
{
str=new char[1];

str[0]='\0';

} 
testdycons (char *string)
{
    str=new char[strlen(string) +1];
    strcpy(str,string);
}
void showstring()
{
    cout<<"You entered:"<<str;
}
~testdycons()
{
    delete []str;
}
}




