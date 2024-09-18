// Constructer and Default arguments
#include <iostream>
using namespace std;
class Simple
{
    int data1, data2, data3;

public:
    Simple(int a, int b = 9, int c = 2)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void print();
};
void Simple ::print()
{
    cout << data1 << "," << data2 << "and" << data3;
}

int main()
{
    Simple s(2);
    s.print();

    return 0;
}