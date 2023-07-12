#include<iostream>
#include<string>
using namespace std;
class Friends
{
    public:
    string name;
    int phone;
    string address;
    public:
    void setData(string Nam, int Phon, string Addr)
    {
        name=Nam;
        phone=Phon;
        address=Addr;
    }
    void showData()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Phone no.:"<<phone<<endl;
        cout<<"Adress:"<<address<<endl;
    }

};

int main()
{
    Friends n1,n2,n3;
    n1.setData("Unish",973573286,"Lalitpur");
    n2.setData("Kalash",983673275,"Kathmandu");
    n3.setData("Biswas",987363632,"Sankhamul");
    n1.showData();
    n2.showData();
    n3.showData();
    return 0;
}