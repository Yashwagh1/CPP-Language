// single inheritance
#include <iostream>
using namespace std;
// base class
class employee
{

public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = 1;
        salary = 30;
    }
    employee()
    {
    }
};
/*derived class
class {{derived-class-name}} : {{visibility mode}} {{base-class-name}}
{
    class member/methods/etc...
}*/
// creating a programmer class derived from employee base class
// note
// 1.default visibility mode is private
// 2.public visibility mode: public member of the base class become public membersof the derived class
// 3.private visibility mode : private member of the base class become private member of the derived class
// 4.private member are never inherited
class programmer : public employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 9;
    void getdat()
    {
        cout << id << endl;
    }
};
int main()
{
    employee yash(1), hemant(2);
    cout << yash.salary << endl;
    cout << hemant.salary << endl;
    programmer skillf(1);
    cout << skillf.languagecode << endl;
    skillf.getdat();
    return 0;
}