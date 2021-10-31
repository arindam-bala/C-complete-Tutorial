/*Create 2 classes
 One>Simple Calculator--> Takes input of 2 numbers using a utility and displays the results using another utility function

 2.Scientific Calculator-->normal operations like Simple Calculator with extra 4 scientific operations
like sin, cos, tan, log etc... and displays the results using another function.

Create another class called HybridCalculator and inherit using these two classes: 
Q1> What type of inheritance are you using?
Q2> Which mode of inheritance are you using? 
Q3> Create an object of HybridCalculator and display results of simple and scientific calculator.
Q4> How is code reusability implemented?    
*/

#include<iostream>
using namespace std;
class SimpleCalculator{
    protected:
        int data1;
        int data2;
    public:
        void setData(int, int);
        void addition();
        void substraction();
        void multiplication();
        void division();

};

void SimpleCalculator :: setData(int a, int b){
    data1 = a;
    data2 = b;
}
void SimpleCalculator :: addition(){
    data1 + data2;
}
void SimpleCalculator :: substraction(){
    data1 - data2;
}
void SimpleCalculator :: multiplication(){
    data1 * data2;
}
void SimpleCalculator :: division(){
    data1 / data2;
}

class ScientificCalculator : public SimpleCalculator{
    protected:
        int data3;
    public:
        void setData2(int);
        void sin();
        void cos();
        void tan();  
};


int main(){

    return 0;
}