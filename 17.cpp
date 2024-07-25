#include<iostream>
using namespace std;
inline int product(int a, int b){
    //not recommended to use below line with inline function
    //static int c=0; this executes only once 
    //c=c+1 ;next time this function is run, the value of c will be retained
    
    return a*b;
}
float moneyreceived(int currentmoney, float factor=1.04){
    return currentmoney + factor;

}
int main(){
int a ,b;
int money=100000;
cout<<"enter the value a and b"<<endl;
cout<<endl;

cin>>a>>b;
// cout<<"answer"<<product(a,b)<<endl;
// cout<<"answer"<<product(a,b)<<endl;
// cout<<"answer"<<product(a,b)<<endl;
// cout<<"answer"<<product(a,b)<<endl;
// cout<<"answer"<<product(a,b)<<endl;
// cout<<"answer"<<product(a,b)<<endl;
// cout<<"answer"<<product(a,b)<<endl;
// cout<<"answer"<<product(a,b)<<endl;
 cout<<"if you have "<<money<<"RS in your bank account you will recive "<<moneyreceived(money)<<"after one year"<<endl; 
cout<<"if you have "<<money<<"RS in your bank account you will recive  "<<moneyreceived(money,1.1)<<"  after one year"<<endl; 




return 0;
}