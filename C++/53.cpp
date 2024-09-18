// This pointer in C++
// this is the keyword which is a pointer which points to the object which invokes to
// member function

#include <iostream>
using namespace std;
class A
{
    int a;

public:
    // A& setdata(int a){
    //     this->a = a;
    //     return *this;
    // }
    void setdata(int a)
    {
        this->a = a;
    }
    void getdata()
    {
        cout << "the value of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.setdata(2);
    a.getdata();

    return 0;
}