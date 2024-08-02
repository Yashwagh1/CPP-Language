// Write a program in C++ to display y terms of natural numbers and their sum.

#include<iostream>
using namespace std;
int main(){
int y,i,sum=0;
cout<<"Enter the term"<<endl;
cin>>y;
for(int i =1;i<=y;i++){
    cout<<i<<endl;
sum=sum+i;    
}
cout<<"adition is "<<sum;
return 0;
}