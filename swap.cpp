//This is a complete code of call by value and call 
// by reference 
#include<iostream>
using namespace std;
//function prototypes

void swap(int a, int b);//this is wrong
void swapPointer(int *aaa, int *bbb);//using pointer
void swapRefVar(int &c, int &d);//using C++ reference Var


int main(){
    //normal swapping code inside main using value 
    //assigning arithmatic algorithm
    
    int a = 4, b = 6 , temp;
    cout<<"before swap"<<endl;
    cout<<"value of a: "<<a<<endl;
    cout<<"value of b: "<<b<<endl;
    //swapping the values
    temp = a;
    a = b;
    b = temp;
    cout<<"after swap"<<endl;
    cout<<"value of a: "<<a<<endl;
    cout<<"value of b: "<<b<<endl;
    //-----------------------------
    
    int aa = 10, bb = 20;
    swap(aa, bb);
    cout<<"using swap function"<<endl;
    cout<<"value of aa: "<<aa<<endl;
    cout<<"value of bb: "<<bb<<endl;
    //-----------------------------

    int aaa = 35, bbb = 45;
    swapPointer(&aaa, &bbb);
    cout<<"using swapPointer function"<<endl;
    cout<<"value of aaa: "<<aaa<<endl;
    cout<<"value of bbb: "<<bbb<<endl;
    //-----------------------------

    int c = 67, d = 27;
    swapRefVar(c, d);
    cout<<"using swapRefVar function"<<endl;
    cout<<"value of c: "<<c<<endl;
    cout<<"value of d: "<<d<<endl;

    return 0;
}



//now we will try to swap the values using 
// a fucntion 
//but this will not work

void swap(int aa, int bb){
    int temp = aa;
    aa = bb;
    bb = temp;
}
//no changes because of copy of value in different variable

//swapp using pointer

void swapPointer(int *aaa, int *bbb){
    int temp = *aaa;
    *aaa = *bbb;
    *bbb = temp;
}

// Call by reference using C++ reference variables

void swapRefVar(int &c, int &d){
    int temp = c;
    c = d;
    d = temp;
}