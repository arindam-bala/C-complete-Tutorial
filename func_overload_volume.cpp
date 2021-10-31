#include<iostream>
using namespace std;

//function to calculate the volume of a sphere
float volume(float r){
    return 4/3 * 3.14 * r*r*r;
}
//function to calculate the volume of a cube
float volume(float x, float y, float z){
    return x * y * z;
}
//function to calculate the volume of a cylinder
float volume(float r, float h){
    return 3.14 * r*r * h;
}

int main(){
    cout<<"volume of sphere: "<<volume(10.35)<<endl;
    cout<<"volume of cube: "<<volume(20.35, 45.21, 16.75)<<endl;
    cout<<"volume of cylinder: "<<volume(24.15, 54.36)<<endl;
}