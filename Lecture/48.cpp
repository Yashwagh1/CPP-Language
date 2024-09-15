
//constructor in derived class


#include<iostream>
using namespace std;
class base1{
int data1;
public:
 base1(int i){
    data1 = i;
    cout<<"base class constructor called"<<endl;
 } 
 
 void print_database1(){
    cout<<"the value of data is"<<data1<<endl;
 }
};
class base2{
    int data2;
    public:
     base2(int i){
    data2 = i;
    cout<<"base class constructor called"<<endl;
 } 
 
 void print_database2(){
    cout<<"the value of data is"<<data2<<endl;
 }

};
class Derivied:public base1,public base2{
    int derived1,derived2;
    public:
    Derivied(int a,int b,int c, int d):base1(a),base2(b){
    derived1 = c;
    derived2 = d;
    cout<<"Derived class constructor called"<<endl;

    }
    void print_data(){
        cout<<"the value of derived1 is "<<derived1<<endl;
        cout<<"the value of derived2 is "<<derived2<<endl;
    }

};

int main(){
Derivied yash(1,2,3,4);
yash.print_database1();
yash.print_database2();
yash.print_data();

return 0;
}