//This is a basic code for understanding the concept of array of objects using pointers
#include<iostream>
using namespace std;

class Shop{
    int id;
    float price;
    public:
        void setData(int a, int b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is : "<<id<<endl;
            cout<<"Price of this item is : "<<price<<endl;
        }
};

int main(){
    int size = 5;
    int p;
    float q;
    /*
        1>General Item Store
        2>Vegetable and Fruits Item Store
        3>Medicine ItemStore
        4>Electronics Item Store
        5>Clothes Item Store

    */
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr; //save first address for future use 
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter id and price of item : "<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"Item No: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    return 0;
}

/*
    int *ptr = &size;
    *** meaning of previous line is store the address of size 
        named memory block inside pointer variable ptr.

    int *ptr = new int[34];
    *** this line means allocate a memory of 34 integer blocks
    if each block contains 4 bytes of memory then total memory cosumed by new int[34] is 34 * 4 = 136 bytes of memory

    now the interesting thing is that when we code
    "int *ptr = new int[34]"
    this basically allocate memory space creating an array of the 
    said size...and store the address of the first byte of that array basically this is the address of the zero'th index element of the array inside the pointer named as ptr... using the assignment operator.

    Now we can access each and every element in this array by incrementing the pointer using incremental operator 
    (++ , +=, ptr = ptr + 1)


*/