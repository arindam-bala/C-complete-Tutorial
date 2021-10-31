#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is: "<<real<<endl;
            cout<<"The imaginary part is: "<<imaginary<<endl;
        }
        void setdata(int a, int b){
            real = a;
            imaginary = b;
        }

};

int main(){
    //Way 1
    // Complex C1;  //object creation
    // Complex *ptr = &C1;     //storing address of C1 inside ptr
    // (*ptr).setdata(2, 3);
    // (*ptr).getData();

    //Way2
    Complex *ptr = new Complex;
    ptr->setdata(1, 3);
    ptr->getData();

     //Another thing is array of objects
     Complex *ptr1 = new Complex[4]; //creating 4 new objects basically an array
     ptr1 -> setdata(1, 4);
     ptr1 -> getData();

     //(*ptr).getData(); is as good as ptr-> getData();



    return 0;
}