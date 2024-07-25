
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
     
   // const int a=34; 
    
    //cout<<"the value of a is: "<<a<<endl;
   // a=45;
  //  You will get an error because a is a constant 
    // cout<<"the value of a is :"<<a<<endl;
    int a=3, b=78, c=1233;
    cout<<"the value of a is: "<<setw(45)<<a<<endl;
    cout<<"the value of b  is: "<<setw(45)<<b<<endl;
    cout<<"the value of c is: "<<setw(45)<<c<<endl;
    
     cout<<"the value of a without setw is: "<<a<<endl;
    cout<<"the value of b without setw is: "<<b<<endl;
    cout<<"the value of c without setw is: "<<c<<endl;
    
    
    
    
    return 0;
}