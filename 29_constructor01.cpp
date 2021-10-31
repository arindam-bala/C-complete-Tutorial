#include<iostream>
using namespace std;

class Complex {
    int a, b;

    //Creating a contructor
    //Constructor is a special function with the same name as of the 
    //class. It is used to initialize the objects of its class
    //It is automatically invoked whenever an object is created
    public:
        Complex(void); //default constructor declaration

        void printNumber(){
            cout<<"Your number is "<<a<< " + "<<b<<"i"<<endl;
            cout<<"This is flow"<<endl;
        }
};

Complex::Complex(void){

    a = 10;
    b = 0;
    cout<<"Hello World"<<endl;
}

int main(){
    Complex c1, c2, c3; //Hello world is printing here
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();



    return 0;
}