#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 5;
    cout << "operator in c++:" << endl;
    cout << "following are the type of operator in c++" << endl;
    // Arithematic operator
    cout << "the value of a+b is " << a + b << endl;
    cout << "the value of a-b is " << a - b << endl;
    cout << "the value of a*b is " << a * b << endl;
    cout << "the value of a/b is " << a / b << endl;
    cout << "the value of a%b is " << a % b << endl;
    cout << "the value of a++ is " << a++ << endl;
    cout << "the value of a-- is " << a-- << endl;
    cout << "the value of ++a is " << ++a << endl;
    cout << "the value of --a is " << --a << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    // comparision operator
    cout << "the value of a==b is " << (a == b) << endl;
    cout << "the value of a!=b is " << (a != b) << endl;
    cout << "the value of a>=b is " << (a >= b) << endl;
    cout << "the value of a<=b is " << (a <= b) << endl;
    cout << "the value of a>b is " << (a > b) << endl;
    cout << "the value of a<b is " << (a < b) << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    // logical operator
    cout << "following are the logical operator in c++" << endl;
    cout << "the value of this logical and operator ((a=b) && (a<b)) is: " << ((a = b) && (a < b)) << endl;
    cout << "the value of this logical or operator ((a=b) || (a<b)) is: " << ((a = b) || (a < b)) << endl;
    cout << "the value of this logical not operator (!(a==b)) is: " << (!(a == b)) << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    return 0;
}