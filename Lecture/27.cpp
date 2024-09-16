#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void print()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }

    friend class calculator;
};

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumreal(complex o1, complex o2)
    {
        return (o1.a + o2.a);
    }

    int sumimg(complex o1, complex o2)
    {
        return (o1.b + o2.b);
    }
};

int main()
{
    complex o1, o2;
    o1.setnumber(1, 2);
    o2.setnumber(4, 6);

    calculator calc;

    int resReal = calc.sumreal(o1, o2);
    cout << "The sum of real parts of o1 and o2 is: " << resReal << endl;

    int resImg = calc.sumimg(o1, o2);
    cout << "The sum of imaginary parts of o1 and o2 is: " << resImg << endl;

    return 0;
}