// pointer to derived class in cpp

#include <iostream>
using namespace std;
class base
{
public:
    int var1;
    void display()
    {
        cout << "Display base class variable var " << var1 << endl;
    }
};
class derived : public base
{
public:
    int var2;
    void display()
    {
        cout << "Display base class variable var2 " << var2 << endl;
    }
};
int main()
{
    base *base_class_pointer;
    base obj1;
    derived obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var1 = 34;
    derived *derived_class_pointer;
    derived_class_pointer = &obj_derived;

    derived_class_pointer->var2 = 364;
    derived_class_pointer->display();
    base_class_pointer->display();

    return 0;
}