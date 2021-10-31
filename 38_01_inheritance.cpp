//This code is just an extension of the previous one 
// In this code I just inherit Base class as a private for Derrived 
// class so here the setData()[this function is actually public in Base class but derrived as private in Derrived class] function of Base class derrived as 
// private in Derrived class.. 

#include<iostream>
using namespace std;
class Base{
    int data1;   //Private by default and is not inheritable
    public:
        int data2; //public 
        //here all these functions are derrived as privare inside the Derrived class
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
class Derrived: private Base{ //Class is being privately
    int data3;
    public:
        void process();
        void display();
};
void Derrived :: process(){
    setData(); //here we can call this function privately
    data3 = data2 * getData1(); //here we can access data1 using this public function of Base class
}
void Derrived :: display(){
    cout<<"Value of data 1 is "<<getData1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl; //direct access of data2
    cout<<"Value of data 3 is "<<data3<<endl; //direct access of data1
}
int main(){
    Derrived der;
    // der.setData(); //here we cant call this function publicly because this function is derrived as private from base class to derrived class
    der.process();
    der.display();

    return 0;
}