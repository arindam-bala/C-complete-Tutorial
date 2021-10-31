//simple code for understand the concept of enum
#include <iostream>
using namespace std;
int main(){
    enum Meal{breakfast, lunch, dinner};
    cout<<breakfast<<" "<<endl;
    cout<<lunch;
    cout<<dinner;
    //another example is here
    enum Friend{arindam, bikram, badol};
    Friend f0 = arindam;
    Friend f1 = bikram;
    Friend f2 = badol;
    cout<<(f2==1); //false
    cout<<f1;
    cout<<f2;
    return 0;


}