// more about friend function and class

#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "Summig the data of X and Y object gives me " << o1.data + o2.num;
}

int main()
{
    X a1;
    Y b1;
    a1.setValue(3);
    b1.setValue(5);

    add(a1, b1);
    return 0;
}