/*union uses a shared memory for better memory
  management. Here we can use only one memory 
  space which is big enough of all data types
  used in this union module. And overwrite the 
  memory space according to our need */

#include<iostream>
using namespace std;

union money{
    int rice;
    float pulse;
    double posto;
};

int main(){
    union money m1;
    // m1.rice = 1756.75;
    m1.posto = 1099657500;
    // cout <<"price of rice is: "<<m1.rice<<endl;
    cout <<"price of posto is: "<<m1.posto<<endl;

    return 0;
}

//This is a efficient memory utilization technique