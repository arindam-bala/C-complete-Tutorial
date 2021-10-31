//we cannot access any data or function inside a 
//class which is declared as private.
// if we have to access any data or function inside 
// a class we have to declare it public.
// we also can access a data which is private by 
// default inside a class using a function of that 
// class which is declared as public. Otherwise 
// we cant.
#include<iostream>
using namespace std;
class Base{
    int data;
    void setData();
    void display(){
        cout<<"Private data is : "<<data<<endl;
    }
};
void Base :: setData(){
    data = 10;
}

int main(){
    Base b1;
    b1.setData(); //we cant access this...
    b1.display(); //because this is private

    return 0;
}