// structure
#include <iostream>
using namespace std;

struct employee
{
    int eId;
    char favchar;
    float salary;
};
int main()
{
    struct employee yash;
    yash.eId = 1;
    yash.favchar = 'p';
    yash.salary = 1200000;
    cout << "the value is " << yash.salary << endl;
    cout << "the value is " << yash.favchar << endl;
    cout << "the value is " << yash.eId << endl;

    return 0;
}