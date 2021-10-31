//Copy Constructors
//When we use constructors in our codes we must use 
// a default constructor for avoiding errors
#include<iostream>
using namespace std;

class Number {
    int n;
    public:
        Number(){n = 0;}  //default constructor
        Number(int num){
            n = num;
        }
        Number(Number & x){
            cout<<"Copy constructor called"<<endl;
            n = x.n;

        }
        void disp(){
            cout<<"The number is :"<<n<<endl;
        }
};

int main(){
    Number n1, n3(45);
    n1.disp();
    n3.disp();
    Number n2(n3);
    n2.disp();
    return 0;
}

/*A copy constructor is used to declare and initialize an object.
    for example:
        integer I2(I1);

        This example would define the object I2 and at the same
        time initialize it to the values of I1. Another form of 
        this statement is 

        integer I2 = I1;

        conclution:
        integer I2(I1) == (integer I2 = I1)

   A copy constructor takes a reference to an object of the same
   class as itself as an argument.

   Note: A reference variable has been used as an argument to the 
   copy constructor. We cannot pass the argument by value to a 
   copy constructor.

   *** When no copy constructor is defined, the compiler supplies 
       its own copy constructor***  


   another example:

        birds parrot, pegion;
        pegion(parrot); //this is a error 
        no copy constructor will invoked

        because pegion is already initialized;

        so if you want to invoke a copy constructor you must 
        declare and intialize it instantly        
   
   */ 