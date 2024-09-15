//Revisiting Pointer new and deletekeyword
#include<iostream>
using namespace std;
int main(){
int a=4;
int* ptr=&a;
cout<<"the value of  a is"<<*ptr;





float *p=new float(40.70);
cout<<"the value at adress p is "<<*p<<endl;
int* arr=new int[3];
arr[0]=5;
arr[1]=6;
arr[2]=4;


cout<<"the value of arr[0] is "<<arr[0]<<endl;
cout<<"the value of arr[1] is "<<arr[1]<<endl;
cout<<"the value of arr[2] is "<<arr[2]<<endl;
return 0;
}