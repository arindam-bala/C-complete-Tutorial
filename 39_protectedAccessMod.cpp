/*
    Access Modifiers:
        1. public: can be inherited and no protection available
        2. private: can't be inherited with high protection
        3. protected: can be inherited but protected 
*/
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
    Base b; //Object of Base class
    Derrived d; //Object of Derrived class
    cout<<b.a; //is inaccessible
    cout<<d.a; //is inaccessible
    return 0;
}
/*Access Modifier Table:
                     Public Derivation    |  Private Derivation  | Protected Drivation
                     ------------------------------------------------------------------
1. Public Members:   |  Public             |    Private           |   Protected
2. Private Members:  |  Not Inherited      |    Not Inherited     |   Not Inherited 
3. Protected Members:|  Protected          |    Not Inherited     |   Protected
*/