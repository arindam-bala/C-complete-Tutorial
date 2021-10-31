//Another example of constructor overloading
//Dynamic initialization of Objects using Constructors
#include<iostream>
using namespace std;

class BankDeposit {
    int principal;
    int years;
    float ineterestRate;
    float returnValue;

    public:
        BankDeposit(){} //Default Constructor
        BankDeposit(int p, int y, float r); //r can be a value like 0.04
        BankDeposit(int p, int y, int r); //r can be a value like 14

        void show();

};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    ineterestRate = r;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}
BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    years = y;
    ineterestRate = float(r)/100;

    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + ineterestRate);
    }
}

void BankDeposit :: show(){
    cout<<"Principal amount was "<<principal<<endl<<" Return value after "<< years<< " year is "<<
    returnValue<<endl;
}

int main(){
    BankDeposit bd1, bd2, bd3; //creating 3 objects of class BankDeposit
    int p, y;
    float r;
    int R;
    cout<<"Enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout<<"Enter the value of p, y, R"<<endl;
    cin>>p>>y>>R; 
    bd2 = BankDeposit(p, y, R);
    bd2.show();
    return 0;
}