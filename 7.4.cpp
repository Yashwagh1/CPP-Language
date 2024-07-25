#include<iostream>

using namespace std;


int main() {
    
    
        
        int a=45;
        float b=45.46;
        cout<<"the value of a is "<<(float)a<<endl;
        cout<<"the value of a is "<<float(a)<<endl;
        cout<<"the value of b is "<<(int)b<<endl;
        cout<<"the value of b is "<<float(b)<<endl;
        
        
        cout<<"the answer is "<<a+b;
        cout<<"the answer is "<<a+int(b);
        cout<<"the answer is "<<a+(int)b;
        return 0;
}