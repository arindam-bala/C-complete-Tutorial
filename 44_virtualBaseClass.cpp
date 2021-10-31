//This is a concept code for understanding virtual base class
//Here we can use virtual public [class name] or
// public virtual [class name]
//both are same
#include<iostream>
using namespace std;
//-----------------------------------------
//grand parent class(virtual base class)
class Student{
    protected:
        int roll_number;
    public:
        void get_number(int);
        void put_number(void);  

};
void Student :: get_number(int a){
    roll_number = a;
}
void Student :: put_number(){
    cout<<"ROLL NUM: "<<roll_number<<endl;
}
//------------------------------------------
//left child of grand parent
class Test : virtual public Student{
    protected:
        float part1, part2;
    public:
        void get_marks(float, float);
        void put_marks(void);
};
void Test :: get_marks(float b, float c){
    part1 = b;
    part2 = c;
}
void Test :: put_marks(){
    cout<<"Part1 marks: "<<part1<<endl;
    cout<<"Part2 marks: "<<part2<<endl;
}
//------------------------------------------
//right child of grand parent
class Sport : public virtual Student{
    protected:
        float score;
    public:
        void get_score(float);
        void put_score(void);
};
void Sport :: get_score(float d){
    score = d;
}
void Sport :: put_score(){
    cout<<"Score is :"<<score<<endl;
}
//------------------------------------------
//child class of Student, Test and Sport classes
class Result : public Test, public Sport{
    float total;
        public:
            void display(void);
};
void Result :: display(void){
    total = part1 + part2 + score;
    put_number();
    put_marks();
    put_score();

    cout<<"Total score : "<<total<<endl;
}
int main(){
    Result student_1;
    student_1.get_number(16);
    student_1.get_marks(75.25, 89.76);
    student_1.get_score(85.45);
    student_1.display();

    return 0;
}