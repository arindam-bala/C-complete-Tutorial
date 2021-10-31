#include<iostream>
using namespace std;

class Complex {
    int a;
    int b;
     
    public:
        void setData(int v1, int v2) {
            a = v1;
            b = v2;
        }
        //object1 and object2 are two objects of class Complex
        //But these objects are used as a fucntion argument of Class
        //Complex(declared as a function parameter)
        void setDataByName(Complex object1, Complex object2) {
            a = object1.a + object2.a; //value of a is 4 here
            b = object1.b + object2.b; //value of b is 6 here
        }
        //In this function(setDataByName) value of (a) under object1(c1) is added to value of (a) under object2(c2) and assign to (a);
        void printNumber() {
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }

};

int main(){
    Complex c1, c2, c3;
    c1.setData(1, 2); //c1 --> (1+2i)
    c1.printNumber();

    c2.setData(3, 4); //c2 --> (3+4i)
    c2.printNumber();

    c3.setDataByName(c1, c2); //c1 and c2 are real object as arguments
    c3.printNumber();

    return 0;
}

