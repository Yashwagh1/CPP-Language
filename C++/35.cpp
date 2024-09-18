// Destructor in c++
#include <iostream>
using namespace std;
// Destructor never take an agrument  nor does it return any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object no. " << count << endl;
    }
    ~num()
    {
        cout << " this is time when my destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout << "We are in main function" << endl;
    cout << "creating first object " << endl;
    num n1;
    {
        cout << "creating two more object " << endl;
        num n2, n3;
        cout << "Existing this block" << endl;
    }
    cout << "Back to main function" << endl;
    return 0;
}