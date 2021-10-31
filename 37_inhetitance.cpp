#include<iostream>
using namespace std;

class Employee {
    int id;
    public:
        float salary;
        Employee(){}    //Default constructor
        Employee(int inpId){
            id = inpId;
            salary = 34000.00;
        }
};
//Creating a derrived class from employee base class
class Programmer : public Employee{
    public:
        Programmer(){}      //Default constructor
        int languageCode = 9;
};



int main(){
    Employee arindam(1), bikram(2);
    cout<<arindam.salary<<endl;
    cout<<bikram.salary<<endl;
    Programmer skillf;

    return 0;
}

//Derrived class syntax
/*
class {{derrived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
*/
//visibility mode:

//Note:
    //1.Default Visibility mode is private
    //2. Public Misibility Mode: Public members of the base class       becomes Public members of the derrived class 
    //3.Private Visibility Mode: Public members of the base class becomes Private members of the derrived class.
    //4. Private members are never inherited
    

