//Multiple inheritance example

#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void setbase2int(int a)
    {
        base2int = a;
    }
};

/* syntax of the ,multiple inheritance 
class derivedc : visibility-mode base1, visibility-mode base2
{
class body of class "derivedc"
};*/

class derivied : public base1, public base2{
    protected:
    int base3int;

public:
    void setbase3int(int a)
    {
        base3int = a;
    }

    void display()
    {
        cout << "the base 1 integer is " << base1int << endl;
        cout << "the base 2 integer is " << base2int << endl;
        cout << "the case 3 integer is " << base3int << endl;
        cout << "the sum of the base 1,2,3 integer is " << base1int + base2int + base3int << endl;
    }
};
/*The inherited derived class will look something like this:

Data members:

baselint --> protected

base2int --> protected

Member functions:

set_baselint() --> public

set_base2int() --> public

set_show() --> public */

int main()
{
    derivied yash;
    yash.setbase1int(20);
    yash.setbase2int(15);
    yash.setbase3int(15);
    yash.display();

    return 0;
}