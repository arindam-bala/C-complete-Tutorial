#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "The value of a is: " << a << endl;
    }
};
int main()
{                                                                                                              
    A a;
    a.setData(5); // member function invoked
    a.getData();  // member function invoked
    return 0;
}

/*
    This is a keyword. Basically it is a pointer which points to the object that invokes the member function.
*/