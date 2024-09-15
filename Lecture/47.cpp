//42.cpp question answer explanation
#include<iostream>
#include<math.h>
using namespace std;
class simplecalculator{
int a,b;
public:
void setdata(){
    cout<<"Enter the first number"<<endl;
    cin>>a;
    cout<<"Enter the second number"<<endl;
    cin>>b;

}
void performoperation(){
    cout<<"the addition operation a+b"<<a+b<<endl;
    cout<<"the subtraction operation a-b"<<a-b<<endl;
    cout<<"the multiplication operation a*b"<<a*b<<endl;
    cout<<"the divition operation a/b"<<a/b<<endl;
}
};
class simple2{
    int a;

public:
void sciset(){
    cout<<"enter the a is"<<endl;
    cin>>a;


}
void op2(){
    cout<<"the cos(a)"<<cos(a)<<endl;
    cout<<"the sin(a)"<<sin(a)<<endl;
    cout<<"the exp(a)"<<exp(a)<<endl;
    cout<<"the tan(a)"<<tan(a)<<endl;
}
};
int main(){
simplecalculator cal;
simple2 cal2;
cal.setdata();
cal.performoperation();
cal2.sciset();
cal2.op2();



return 0;
}