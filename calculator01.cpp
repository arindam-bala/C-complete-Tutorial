#include<iostream>
using namespace std;
class SimpleCalculator{
    int data1;
    int data2;
    int data3;
        public:
            void set_data(int, int);
            int add();
            int sub();
            int mult();
            int div();
            void disp();
};
void SimpleCalculator :: set_data(int a, int b){
    data1 = a;
    data2 = b;
}
int SimpleCalculator :: add(){
    data3 = data1 + data2;
    return data3;
}
int SimpleCalculator :: sub(){
    data3 = data1 - data2;
    return data3;
}
int SimpleCalculator :: mult(){
    data3 = data1 * data2;
    return data3;
}
int SimpleCalculator :: div(){
    data3 = data1 / data2;
    return data3;
}

int main(){
    SimpleCalculator calc;
    calc.set_data(20, 35);
    return 0;
}