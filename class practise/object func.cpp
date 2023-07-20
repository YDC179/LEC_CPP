#include<iostream>
using namespace std;
class student{
    private:
    char assignment[10];
    int roll,age;
    public:
     void read () 
     {
        cout<<"Enter roll no:";
        cin>>roll;
        cout<<"Enter age:";
        cin>>age;
     }
     void assign()
     {
        cout<<"Submitted? [Y/N]:";
        cin>>assignment;
     }
     void info(){
        cout<<"ROll no"<<roll<<endl;
        cout<<"Assignment check"<<assignment<<endl;
     }
};

int main()
{
    student fred, muse;
    cout<<"student: Fred"<<endl;
    fred.read();
    fred.assign();
    fred.info();

    cout<<"student: Muse"<<endl;
    muse.read();
    muse.assign();
    muse.info();

    return 0;
}