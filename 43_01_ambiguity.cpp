 #include<iostream>
 using namespace std;
 class A {
     public: 
        void say(){
            cout<<"hello world"<<endl;
        }
 };
 class B : public A{
     int a;
     public:
        // void disp(){
        //     cout<<"HI I AM A NERD"<<endl;
        // } 
        void say(){
            cout<<"Hello my beautiful people"<<endl;
        }
 };
 int main(){
     A a;
     B b;
     a.say();
     b.say();
 
     return 0;
 }

 //When we define the functions with same name and we just make one class as a derived class and another is the base class. 
 //then if we want to access those functions using different objects of both classes it will automatically select the local function according to the object itself. 
 
 