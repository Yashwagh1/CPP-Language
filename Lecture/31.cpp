//Multiple constructer in one program 

#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    
    
    Complex(){
         a=0;
         b=0;
    }
     Complex(int x, int y){
        a=x;
        b=y;

     }
     Complex(int x){
        a = x;
        b = 0;
     }
     void print(){
        cout<<"Your complex no. is "<<a<< "+ "<<b<<"i "<<endl;
     }
};


int main(){
    Complex a(4,6);
    a.print();
    Complex b(5);
    b.print();
    Complex c;
    c.print();
    Complex d(2);
    d.print();




return 0;
}