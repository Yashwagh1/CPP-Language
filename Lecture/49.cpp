//initialization list in constructor
#include<iostream>
using namespace std;
/*syntax for the initialization list in constrctor 
constructor (argument-list) : initialiaztion-section
{
assignment + other code;

}*/
class test {
    int a,b;
    public:
    test(int i,int j):a(i),b(i+j){
        cout<<"constrctor executed"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main(){
test(7,9);
return 0;
}