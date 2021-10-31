#include<iostream>
using namespace std;
int main(){
    // pointer arithmatic formulae
    //-----------------------------
    //address new = address current + i*sizeof(datatype)

    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    // *(++p);
    cout<<*p<<endl;
    cout <<*(p+1);
    

    return 0;
}