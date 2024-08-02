//  Write a program in C++ to find a prime number within a range
#include<iostream>
using namespace std;
int main(){
int i,j;
for(int i= 0;i<=100;i++){
    for(int j=2;j<i;j++){
        if(i%j==0)
        break;
        else if (i==j+1)
        cout<<i<<endl<<"";
    }
}

return 0;
}