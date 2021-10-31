#include<iostream>
using namespace std;
class Base{
    int data1;   //Private by default and is not inheritable
    public:
        int data2; //public 
        void setData();
        int getData1();
        int getData2();
};
void Base :: setData(void){
    data1 = 10;
    data2 = 20;
}
int Base :: getData1(){
    return data1;
}
class Derrived: public Base{ //Class is being derrived publically
    int data3;
    public:
        void process();
        void display();
};
void Derrived :: process(){
    
    data3 = data2 * getData1(); //here we can access data1 using this public function of Base class
}
void Derrived :: display(){
    cout<<"Value of data 1 is "<<getData1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl; //direct access of data2
    cout<<"Value of data 3 is "<<data3<<endl; //direct access of data1
}
int main(){
    Derrived der;
    der.setData();
    der.process();
    der.display();

    return 0;
}