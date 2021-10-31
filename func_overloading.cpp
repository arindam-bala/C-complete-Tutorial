// this is a basic example of function overloading

#include<iostream>
using namespace std;

int add(int a, int b){
    cout<<"function using two arguments"<<endl;
    return a + b;
}
int add(int a, int b){
    cout<<"function using two arguments"<<endl;
    return a + b;
}
// int add(int a, int b, int c){
//     cout<<"function using three arguments"<<endl;
//     return a + b + c;
// }

int main(){
    cout<<"the sum of a and b is: "<<add(2, 3)<<endl;
    cout<<"the sum of a, b and c is: "<<add(2, 4)<<endl;
}
    


