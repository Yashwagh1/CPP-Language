
#include<iostream>
using namespace std;
//fuction prototype
//type fuction-name (argument)
//int sum(int a, int b);------ acceptable 
//int sum(int a , b);------ not acceptable 
//int sum(int , int );------ acceptable 
int sum(int a, int b);
int main() {
    int num1, num2;
    cout<<"enter first number"<<endl;    
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;

    //num1, num2 are the actual parameter

    cout<<"the sum is "<<sum(num1,num2);
    return 0;
    }
//return value fuction key
int sum(int a, int b){
    //a,b will be taking the value from actual parameters num1 and num2 
    int c= a+b;
    
    return c;
}

 