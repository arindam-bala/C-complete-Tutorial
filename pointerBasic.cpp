#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *b = &a;
    int **c = &b;
    cout<< "The address of a is : "<<&a<<endl;
    cout<< "The address of a is : "<<b<<endl;
    //dereferencing operator
    cout<< "The value of a is : "<<*b<<endl;
    cout<< "The value of a is : "<<**c<<endl;

    return 0;
}