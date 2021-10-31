#include<iostream>
using namespace std;
int main(){
    string food = "pizza";
    string &meal = food;
    string *ptr1 = &food;
    string *ptr2 = &meal; 

    cout << "name of food is "<<food<<endl;
    cout <<meal<<endl;
    cout <<ptr1<<endl;
    cout <<ptr2<<endl;
    return 0;
}

