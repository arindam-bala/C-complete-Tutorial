// This is a example code from Balaguruswamy

#include <iostream>
using namespace std;
class BC
{
public:
    int b;
    void show()
    {
        cout << "b = " << b << endl;
    }
};

class DC : public BC
{
public:
    int d;
    void show()
    {
        cout << "b = " << b << endl;
        cout << "d = " << d << endl;
    }
};
int main()
{
    BC *bptr;     // pointer of base class
    BC base;      // object of base class
    bptr = &base; // pointer to base class object

    bptr->b = 100; // access BC via base pointer
    cout << "bptr points to base object" << endl;
    bptr->show(); // base class show function invoked

    // derived class
    DC derived;      // derived class object created
    bptr = &derived; // bptr points to object of derived object

    bptr->b = 200; // access DC via base pointer but how??
    // we assign the address of derived object to bptr///means
    // we ponits using a base class pointer to a derived class object and when we want to access the variable (b) which is basically a base class variable it will open to access because the derived class is inherited from base class.

    // so here we use inheritance with the help of pointer

    /* bptr -> d = 300; */ // won't work

    // because d is the only public variable of derived class variable DC and it cant be accessed with the base class pointer

    cout << "bptr now points to derived object" << endl;
    bptr->show(); // bptr now points to derived object

    // accessing d using a pointer of type derived class DC

    DC *dptr;
    dptr = &derived;
    dptr->d = 300;

    cout<<"dptr is derived type pointer"<<endl;
    dptr -> show(); //accessing show() of DC class
    cout<<" using (DC *) bptr"<<endl;
    ((DC *)bptr) -> d = 400; //cast bptr to DC type
    ((DC *)bptr) -> show(); //BC::show()
     

    return 0;
}

/*
    Here in line no 26 we assign the value 100 to the public variable b of class BC(base_class) with the help of bptr(pointer variable of class BC) and points to this variable...simply means bptr has the memory address of public variable b of class BC where we assign the value 100.
*/