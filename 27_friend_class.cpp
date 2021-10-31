#include<iostream>
using namespace std;
//forward declaration
class Complex;

class Calculator {
    public:
        int add(int a, int b) {
            return (a + b);
        }
        int sumRealComplex(Complex, Complex);
        int sumCompComplex(Complex, Complex);
        
};

class Complex {
    int a, b;
    //Individually declaring function as friends
    //friend int Calculator :: sumRealComplex(Complex, Complex);//Good Practice
    //friend int Calculator :: sumCompComplex(Complex, Complex);
    friend class Calculator; //make the Calculator class as a friend of Complex class
    public:
        void setNumber(int v1, int v2) {
            a = v1;
            b = v2;
        }
        void printNumber() {
            cout<<"The complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};

int Calculator :: sumRealComplex(Complex Obj1, Complex Obj2) {
    return (Obj1.a + Obj2.a);
}
int Calculator :: sumCompComplex(Complex Obj1, Complex Obj2) {
    return (Obj1.b + Obj2.b);
}


int main(){
    Complex Obj1, Obj2;
    Obj1.setNumber(1, 4);
    Obj2.setNumber(5, 6);

    Calculator calc;
    int res = calc.sumRealComplex(Obj1, Obj2);
    cout<<"The sum of real part of Obj1 and Obj2 is "<<res<<endl; 

    return 0;
}




