#include<iostream>
using namespace std;
int main(){
    int a = 1112,b = 695;
    int c = a % b;
    while(c != 0){
        a = b;
        b = c;
        c = a % b;
    }
    cout <<"the GCD is: "<<b<<endl;
    return 0;
}

