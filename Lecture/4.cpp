#include <iostream>
using namespace std;
int glo = 6;
void sum()
{
    int a;
    cout << glo << endl;
}

int main()
{
    int glo = 9;
    glo = 78;
    int a = 3, b = 6;
    float pi = 3.15;
    char c = 'd';
    bool is_true = false;
    sum();
    cout << glo << is_true << endl;
    cout << "here the value of a is " << a << "the value of b is " << b << endl;
    cout << "the value of pi is: " << pi << endl;
    cout << "the value of c is: " << c << endl;
    return 0;
}