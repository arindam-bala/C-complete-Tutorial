#include<iostream>
using namespace std;
class Base{
    protected:
        int a;
    private:
        int b;
};
class Derrived : protected Base{

};

int main(){
    Base b;
    Derrived d;

    // cout<<d.a<<endl; //Will not work since a is protected in both base as well as derrived class
    return 0;
}