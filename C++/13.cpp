//
#include <iostream>

using namespace std;

int main()
{
    int marks[] = {17, 45, 63, 93};
    int mathmarks[4];
    mathmarks[0] = 2278;
    mathmarks[1] = 738;
    mathmarks[2] = 378;
    mathmarks[3] = 578;
    cout << "these are the math marks" << endl;

    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
    cout << endl;
    cout << endl;
    cout << "these are the marks" << endl;
    // you can change the value of the array.
    // marks[2]=18;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "the value of the marks " << i << " is " << marks[i] << endl;
    }

    // pointer and arrays
    int *p = marks;
    cout << "the value of marks[0]" << *(p) << endl;
    cout << "the value of marks[1]" << *(p + 1) << endl;
    cout << "the value of marks[2]" << *(p + 2) << endl;
    cout << "the value of marks[3]" << *(p + 3) << endl;
    cout << *(++p) << endl;
    cout << *(p++) << endl;

    return 0;
}