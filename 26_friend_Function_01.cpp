//This is a basic intoduction of friend function code
#include<iostream>
using namespace std;

class Complex {
    int a, b;

    public:
        void setNumber(int n1, int n2) {
            a = n1;
            b = n2;
        }
        friend Complex sumComplex(Complex Obj1, Complex Obj2);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;    
        }

            
};

Complex sumComplex(Complex Obj1, Complex Obj2){
    Complex Obj3;
    Obj3.setNumber((Obj1.a + Obj2.a),(Obj1.b + Obj2.b));
    return Obj3;
}



int main(){
    Complex c1, c2, sum;
    c1.setNumber(1, 2);  //(1 + 2i)
    c1.printNumber();
    
    c2.setNumber(4, 5); //(4 + 5i)
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

