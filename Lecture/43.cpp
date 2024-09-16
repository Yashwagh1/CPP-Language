
// Ambiguity resilution in inheritance
//  same function in base class

#include <iostream>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "good morning " << endl;
    }
};
class base2
{
public:
    void greet()
    {
        cout << "good night" << endl;
    }
};
class derived : public base2, public base1
{
    int a;

public:
    void greet()
    {
        base1::greet();
    }
};
class B
{
public:
    void say()
    {
        cout << "hello" << endl;
    }
};
class A : public B
{
    int a;
    // A's new say() method will override base class's say() method
public:
    void say()
    {
        cout << "hello Yash" << endl;
    }
};

int main()
{
    //     //Ambiguity
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // derived d;
    // d.greet();

    // Ambiguity 2
    A a;
    B b;
    a.say();
    b.say();

    return 0;
}