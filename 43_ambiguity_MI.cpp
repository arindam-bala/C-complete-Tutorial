 //This is a code for understanding the concept of ambiguity in case of multiple inheritance

 #include<iostream>
 using namespace std;
 class Base1 {
     public:
        void greet(){
            cout<<"How are you guy?"<<endl;
        }
 };
 class Base2 {
     public:
        void greet(){
            cout<<"kemon aacho bhai"<<endl;
        }
 };
 class Derived : public Base1, public Base2{
     int a;
     public:
        void greet(){
            Base1 :: greet();
        }

 };

 class B {
     public: 
        void say(){
            cout<<"hello world"<<endl;
        }
 };
 class D {
     public:
     //D's new say() method will override base class's say() method 
        void say(){
            cout<<"Hello my beautiful people"<<endl;
        }
 };
 
 int main(){
    //  Base1 base1obj;
    //  Base2 base2obj;
    //  base1obj.greet();
    //  base2obj.greet();
     Derived d;
     d.greet();
     return 0;
 }