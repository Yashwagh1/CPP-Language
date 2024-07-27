// function overloading
#include<iostream>
using namespace std;
int sum(int a, int b){
    cout<<"it is the addition of the two variable "<<endl;
    return a+b;
}
int sum (int a, int b, int c ){
    cout<<"it is the addition of the two varaible"<<endl;
    return a+b+c;
}
// calculate the volume of the cylinder
int volume (double r, int h ){
    return (3./14*r*r*h);
    }
    // calculate the volume of the cube
    int volume (int a ){
        return (a*a*a);
    }
    // rectangular box 
    int volume (int l, int b, int h){
        return (l*b*h);
    }
int main(){
    int a, b, c, r, h, l;
    cout<<"enter the three number "<<endl;
    cin>>a>>b>>c;
    cout<<"the  first addition is the "<<sum(a, b, c)<<endl;
    cout<<"the second addition is the "<<sum(a, b)<<endl;
    cout<<"for the calculating the  volume of the cube"<< endl;
    cin>>r>>h>>l;
    cout<< "the volume of the cylinder is "<<volume(r, h)<<endl;
    cout<< "the volume of the cube is "<<volume(a)<<endl;
    cout<< "the volume of the rectangular box is "<<volume(l, b, h)<<endl;


return 0;
}


