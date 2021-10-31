//This is a simple example of constructor overloading
//It is basically same as method overloading
#include<iostream>
using namespace std;

class Area {
    int len;
    int bre;
    int res;

    public:
        //Default constructor declaration
        Area();
        //Parameterized constructor with one parameter
        Area(int);
        //Parameterized constructor with two parameters
        Area(int, int);
        //Parameterized constructor with three parameter
        Area(int, int, int);

        //This function just print values as output
        void printArea(){
            cout<<"area is "<<res<<endl;
        }
};
//Defination of default constructor
Area :: Area(){
    len = 5;
    bre = 5;
    res = len * bre;
}
//Defination of constructor with one parameter 
Area :: Area(int x){
    len = x;
    bre = 65;
    res = len * bre;
}
//Defination of constructor with two parameters
Area :: Area(int x, int y){
    len = x;
    bre = y;
    res = len * bre;
}
//Defination of constructor with three parameters
Area :: Area(int x, int y, int z){
    len = x;
    bre = y;
    res = 2*len * bre * z;
}
int main(){
    Area a = Area();
    a.printArea();
    a = Area(50);
    a.printArea();
    a = Area(10, 20);
    a.printArea();
    a = Area(3.14, 10, 30);
    a.printArea();
    return 0;
}