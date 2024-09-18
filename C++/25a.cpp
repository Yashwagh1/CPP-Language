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
    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o2.b + o2.b;
    }
    void print()
    {
        cout << "your complex no. is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setnumber(2, 3);
    c1.print();
    c2.setnumber(5, 3);
    c2.print();
    c3.setdatabysum(c1, c2);
    c3.print();

    return 0;
}