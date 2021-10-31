#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var_base: "<<var_base<<endl;
        }

};

class Derived_class : public BaseClass{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var_base"<<endl;
            cout<<"Displaying Derived class variable"<<endl;
        }
};

int main(){
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    Derived_class obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer; 
    return 0;
}

//*base_class_pointer is a pointer to base class object
//obj_base is a object of base class;
//obj_derrived is a object of derrived class;


