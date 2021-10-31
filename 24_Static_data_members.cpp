//Static Variable is also known as Class Variable in C++
//Static funtions can access only Static variables and 
// another static functions
// It is used in C++ and very useful fucntion for OOP 
//operation in class
#include<iostream>
using namespace std;

class Employee {
    int id;
    static int count;

    public:
        void setData(void) {
            cout<<"Enter the id number: "<<endl;
            cin>>id;
            count ++;
        }
        void getData(void) {
            cout<<"The id of this employee is: "<<id<<" and this is employee number "<<count<<endl;
        }
        static void getCount(void){
            cout<<"The value of count is "<<count<<endl;
        }
};
//count is the static data member of class employee
int Employee :: count; //Default value is zero(0)
int main(){
    Employee arindam, bikram, soumen;
    arindam.setData();
    arindam.getData();
    Employee::getCount();

    
    bikram.setData();
    bikram.getData();
    Employee::getCount();
    
    soumen.setData();
    soumen.getData();
    Employee::getCount();
}
    
    
    

    


