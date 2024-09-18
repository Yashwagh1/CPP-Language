#include<iostream>
#include<fstream>
using namespace std;
// float funcAverage(int a,int b){
//     float avg = (a+b)/2;
//     return avg;

// }
// float funcAverage2(int a,float b){
//     float avg = (a+b)/2.0;
//     return avg;

// }
template<class T>

void swapp(T &a,T &b){
    T temp = a;
    a=b;
    b = temp;
}
template<class T1,class T2>
float funcAverage(T1 a,T2 b){
    float avg = (a+b)/2;
    return avg;
}
int main(){
float a;
int X=12, Y=13;
swapp(X,Y);
cout<<X<<endl<<Y;
a = funcAverage(10,12.4);
printf("the average of this number is %.3f  ",a);

return 0;
}