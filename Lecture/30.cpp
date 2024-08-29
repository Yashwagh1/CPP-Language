#include<iostream>
using namespace std;
class complex{
    
    int a,b;
    public:
    complex(int ,int );
    void printNumber(){
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex::complex(int x, int y){// this is a parameterized constructor it takes no parameters

    a=x;
    b=y;
    
}
int main(){
    //implicit call
complex a(4,5);

//Exlicit call
complex b = complex(5,7);
a.printNumber();
b.printNumber();
return 0;
}