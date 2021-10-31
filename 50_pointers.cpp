//This is a basic code for understanding pointers
#include<iostream>
using namespace std;

int main(){
    //Basic Example
    int a = 4;
    int* ptr = &a;

    cout<<"The value of a is: "<<*(ptr)<<endl;   //dereferencing 

    //new keyword
    int *p = new int(40);
    cout<<"The value at address p is: "<< *(p) <<endl;

    float *b = new float(35.57);
    cout<<"The value at address p is: "<< *(b)<<endl;

    int *arr = new int[3];
    arr[0] = 12;
    arr[1] = 23;
    arr[2] = 45;

    delete[] arr;

     cout<<"The value of arr[0] is : "<<arr[0]<<endl;
     cout<<"The value of arr[1] is : "<<arr[1]<<endl;
     cout<<"The value of arr[2] is : "<<arr[2]<<endl;
    

    return 0;
}