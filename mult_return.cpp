
// This is a simple code example for returning multiple
// values from a function
#include<iostream>
using namespace std;

int mathOperation(int x, int y, int* s, int*d);

int main(){
    int x = 30;
    int y = 20;
    int s, d;
    mathOperation(x, y, &s, &d);
    cout<<"s = "<<s<<" and"<<" d = "<<d<<endl;
    return 0;
}
int mathOperation(int a, int b, int* sum, int* diff){
    *sum = a + b;
    *diff = a - b;
}  