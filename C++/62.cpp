//file I/O
// open() and eof() function

#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out;
    out.open("sample60.txt");
    out<<"This is me Yash"<<endl;
    out<<"Full Name is Yash Wagh";

    out.close();
    
    ifstream in;
    string st,st2;

    in.open("58.txt");
    // in>>st>>st2;
    // cout<<st<<st2;
    while(in.eof()==0){
        getline(in,st);
        cout<<st;


    }
in.close();


return 0;
}