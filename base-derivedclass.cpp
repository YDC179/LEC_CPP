#include <iostream>
using namespace std;
class Account {
    public:
    double asset;
    double liability;
    float salary=60000;
    Account(double a, double b){
        asset=a;
        liability=b;
    }
    
    double calculateProfit()
    {
        return asset/liability;
    }
};    //base class



int main(void) {
   Account a1(1000,10);
   cout<<"Profit margin:"<<a1.calculateProfit();
}


