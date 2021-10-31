// Multilevel inheritance code concept
/*Access Modifier Table:
                     Public Derivation    |  Private Derivation  | Protected Drivation
                     ------------------------------------------------------------------
1. Public Members:   |  Public             |    Private           |   Protected
2. Private Members:  |  Not Inherited      |    Not Inherited     |   Not Inherited
3. Protected Members:|  Protected          |    Not Inherited     |   Protected
*/

#include <iostream>
using namespace std;
class Student
{
protected: 
    int roll_number;

public:
    void set_roll_number(int);  // function declaration
    void get_roll_number(void); // function declaration
};

void Student :: set_roll_number(int r){
    roll_number = r;
}

void Student :: get_roll_number(){
    cout<<"The roll number is: "<<roll_number<<endl;
}

class Exam : public Student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);    
};

void Exam :: set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: get_marks(){
    cout<<"The marks obtained in maths are : "<<maths<<endl;
    cout<<"The marks obtained in physics are : "<<physics<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display_result(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is: "<< (maths + physics)/2<<"%"<<endl;
        }
};
/*
    Notes: 
    1. If we are inheriting  B from A and C from B: [ A --> B --> C ]
    2. A is the base class for B and B is the base class for C
    3. A-->B-->C is called inheritance path      
*/
int main()
{   Result arindam;
    arindam.set_roll_number(420);
    arindam.set_marks(94.0, 90.0);
    arindam.display_result();

    return 0;
}