#include<iostream>
using namespace std;

class Employee {
    int id;
    int salary;

    public:
        void setId(void) {
            salary = 122;
            cout<<"Enter the Id of employee "<<endl;
            cin>>id;
        }
        void getId(void) {
            cout<<"The Id od this employee is "<<id<<endl;
        }
};

int main(){
    // Employee arindam, bikram, soumen, dipankar;
    // arindam.setId();
    // arindam.getId();
    Employee emp[4]; //Array of Object
    for (int i = 0; i < 4; i++)
    {
        emp[i].setId();
        emp[i].getId();
    }
}