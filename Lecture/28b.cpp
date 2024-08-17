

/*Swap of the two numbers using the friend function*/


#include<iostream>
using namespace std;
class c2;
class c1{
int val1;
public:
void indata(int a){
    val1=a;

}
void display(){
    cout<<"The output is "<<val1<<endl;

}
friend void exchange(c1 &,c2 &);
};
class c2{
int val2;
public:
void indata(int a){
    val2=a;

}
void display(){
    cout<<"The output is "<<val2<<endl;
    
}
friend void exchange(c1 &,c2 &);
};
// // trick of swap two numbers
// temp=a;
// a=b;
// b=temp;
void exchange(c1 & x, c2 & y){
    int tmp = x.val1;
    x.val1=y.val2;
    y.val2=tmp;

}
int main(){
c1 oc1;
c2 oc2;

oc1.indata(34);
oc2.indata(64);
exchange(oc1,oc2);
cout<<"The value after the exchanging become ";
oc1.display();
cout<<"The value after the exchanging become ";
oc2.display();

return 0;
}