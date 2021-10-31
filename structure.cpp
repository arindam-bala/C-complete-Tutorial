#include<iostream>
using namespace std;

struct student{
     int id;
     char favChar;
     float marks;
};

int main(){
    struct student arindam;
    struct student dipankar;
    arindam.id = 1071;
    arindam.favChar = 'a';
    arindam.marks = 85.75;
    dipankar.id = 1072;
    dipankar.favChar = 'b';
    dipankar.marks = 90.57;
    
    cout<<"Student id of Arindam: "<<arindam.id<<endl;
    cout<<"Student id of Arindam: "<<arindam.favChar<<endl;
    cout<<"Student id of Arindam: "<<arindam.marks<<endl;
    cout<<"Student id of Dipankar: "<<dipankar.id<<endl;
    cout<<"Student id of Dipankar: "<<dipankar.favChar<<endl;
    cout<<"Student id of Dipankar: "<<dipankar.marks<<endl;

    return 0;

}