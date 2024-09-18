#include<iostream>
#include<fstream>
using namespace std;
template<class T>
class yash{
    public:
    T data;
    yash(T a):data(a){}
    
    void display();

};
template<class T>
void yash<T>:: display(){
        cout<<data;
    }

int main(){
yash<int>y(5.7);
cout<<y.data<<endl;
y.display();
return 0;
}