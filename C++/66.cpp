//Class template with Default parameter in C++
//C++ template


#include<iostream>
#include<fstream>
using namespace std;
template<class T1= int ,class T2=float,class T3=char>
class yash {
public:
T1 a;
T2 b;
T3 c;

yash(T1 x, T2 y, T3 z):a(x),b(y),c(z){

}
void display(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
    
}
};

int main(){
yash<> y(4,8.4,'v');
y.display();
yash<float,char, char> g(4.4,'b','v');
g.display();

return 0;
}