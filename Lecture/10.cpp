// loops using for the printing the 1 to 100
#include <iostream>

using namespace std;

int main()
{
    // there are three type of loop in c++
    // 1.for loop
    // 2.while loop
    // 3.do while loop
    for (int i = 1; i < 101; i)
    {
        cout << i << endl;
        i++;
    }

    int i = 1;
    while (i <= 100)
    {
        cout << i << endl;
        i++;
    }
    return 0;
}
