// file i/o
// Reading & Writing to a file
// There are three useful class in fstream
// 1.fstreambase
// 2.ifstream
// 3.ofstream

/*Read operation
ifstream in ("this.txt")
string s;
in>>st; // just like cin>>
*/

/*
Writing operation
ofstream out("this.txt");
string st="Yash";
out<<st; //just like the cout<<
*/

#include <iostream>
#include <fstream>
using namespace std;
// connecting our file with hout stream
//  creating a name string and filling it with the string entered by the user
int main()
{
    ofstream hout("sample61.txt");
    string name;
    cout << "Enter the your name " << endl;
    cin >> name;
    // writing a string to the file
    hout << "My name is " + name;
    hout.close();
    ifstream hin("sample61.txt");
    string content;
    getline(hin, content);
    hin >> content;
    cout << "the content of this file is " << content;
    hin.close();

    return 0;
}