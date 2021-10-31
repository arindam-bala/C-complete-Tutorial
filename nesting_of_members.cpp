#include <iostream>
#include <string>
using namespace std;

class Binary
{
//private:   //by default it is private    
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};
void Binary :: read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}

void Binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!= '0' && s.at(i)!= '1')
        {
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
        
    }
    
}

void Binary :: ones_complement(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
    

void Binary :: display(){
    chk_bin();
    cout<<"Given Binary string is: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
    

int main()
{
    Binary b;
    b.read();
    // b.chk_bin();
    // cout<<"Given Binary string is: ";
    b.display();
    cout<<"After ones complement: ";
    b.ones_complement();
    b.display();

    return 0;
}

        
    

