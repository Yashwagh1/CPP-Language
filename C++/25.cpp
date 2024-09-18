#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 12000;
        cout << "Enter the id of the employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "the id of this employee is " << id << endl;
    }
};
int main()
{
    // Employee yash,soham,hemant;
    // // yash.setId();
    // // yash.getId();
    Employee fb[3];
    for (int i = 0; i < 3; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}