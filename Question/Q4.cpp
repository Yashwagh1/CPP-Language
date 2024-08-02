// Write a program in C++ to find the perfect numbers between 1 and 500.
#include<iostream>
using namespace std;
int main(){
int a=1,b=1,sum=0;
for (int i=0;1<=500;i++)
{ if (b<a){
    cout<<"perfect program "<<endl;
if (a%b==0){
    sum=sum+b;
}
b++;
}
if (sum==a){
    cout<<a;

}
a++;
b=1;
sum=0;
}


return 0;
}