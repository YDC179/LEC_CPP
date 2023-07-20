#include<iostream>
using namespace std;

class Sample
{
    friend float mean(Sample obj);
    
    private:
    float num1,num2;

    public:
    void getdata()
    {
        float a,b;
        cout<<"Input data:"<<endl;
        cin>>a>>b;
        num1=a;
        num2=b;
    }
};

float mean(Sample obj)
{
    float m;
    m=(obj.num1+obj.num2)/2;
    return m;
}

int main()
{
    Sample obj;
    obj.getdata();
    cout<<"The mean is:"<<mean(obj)<<endl;
}