#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 3, 4, 7, 5};
    cout<<arr[0]<<endl;
    cout<<arr[3]<<endl;
    arr[2] = 55;        //reassigning value at index 2
    cout<<arr[2]<<endl;
    return 0;
}