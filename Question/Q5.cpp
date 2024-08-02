//Write a program in C++ to check whether a number is prime or not.
#include<iostream>
using namespace std;
int main(){
    int y;
cout<<"enter the number :-";
cin>>y;
if(y%y==0){
    cout<<y<<" is the prime no.";

}
else{
    cout<<y<<" is not prime no.";
}
return 0;
}