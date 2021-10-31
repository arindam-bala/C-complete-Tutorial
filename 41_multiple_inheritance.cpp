//Multiple Inheritance
//This is a simple example to understand the concept
/*Access Modifier Table:
                     Public Derivation    |  Private Derivation  | Protected Drivation
                     ------------------------------------------------------------------
1. Public Members:   |  Public             |    Private           |   Protected
2. Private Members:  |  Not Inherited      |    Not Inherited     |   Not Inherited
3. Protected Members:|  Protected          |    Not Inherited     |   Protected
*/
#include<iostream>
using namespace std;
//Syntax for inheriting for multiple inheritance
//Class DerivedC: Visibility-mode base1, Visibility-mode base2
//{
// Class body of class "DerivedC"
//}; 

class Base1 {
    protected:
        int base1Int;
    public:
        void set_base1Int(int a){
            base1Int = a;
        }
};
class Base2{
    protected:
        int base2Int;
        public:
            void set_base2Int(int b){
                base2Int = b;
            }
}; 
class Derrived : public Base1, public Base2{
    public:
        void show(){
            cout<<"The value of Base1 is : "<<base1Int<<endl;
            cout<<"The value of Base2 is : "<<base2Int<<endl;
            cout<<"The sum of values is: "<<base1Int + base2Int<<endl;
        }
};
int main(){
    Derrived arindam;
    arindam.set_base1Int(10);
    arindam.set_base2Int(35);
    arindam.show();

    return 0;
}

/*
The inherited derived class will look something like this:
Data members:
    base1Int--> Protected
    base2Int--> Protected

Member functions:
    set_base1Int()-->public
    set_base2Int()-->public
    show()--public    
*/