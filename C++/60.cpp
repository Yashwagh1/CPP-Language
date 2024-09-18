#include<iostream>
#include<fstream>
// The useful classes for working with files in c++ are:
// 1.fstreambase
// 2.ifstream --> derived from fstreambase
// 2.ofstream --> derived from fstreambase

// in order work with files in c++, you will have to open it, there are 2 ways to open a file
// 1. using the constructor
// 2.using the member function open() of the class
using namespace std;
int main(){
    // Opening file using constructor and writing i
    string st="Yash";
string st2;
// Opening file using constructor and reading it 


ifstream in("sample60.txt");// write operation
//out<<st;
//in>>st2;
getline(in,st2);
cout<<st2;
return 0;
}