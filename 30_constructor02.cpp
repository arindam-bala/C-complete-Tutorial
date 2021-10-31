#include<iostream>
using namespace std;

class Complex {

    int a, b;

    public:
        // Complex(void); //Default Constructor Declaration
        //Now we define a parameterized constructor
        Complex(int, int); //This is a declaration of a parameterized constructor
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
//This is a defination of a default constructor 
// It accepts no parameters
// Complex :: Complex(void){
//     a = 10;  //Simply assigning values to the private members 
//     b = 20;    // of class Complex
// }

//This is a defenation of a parameterized constructor
//It takes arguments as parameters
Complex :: Complex(int x, int y){
    a = x;
    b = y;
}
int main(){
    //Implicit Call--> because we pass the values as arguments to  
    //parameters indirectly using object (a) here.
    Complex a(4, 6);

    //We can use Explicit Call also --> here we call using the 
    //constructor itself with the help of object (b)
    Complex b = Complex(5, 6);
    b.printNumber();
    return 0;
}