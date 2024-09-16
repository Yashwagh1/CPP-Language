#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with same name of the class
    // It is used to intializ the object of its class

    complex(void); //    Decleration of the constructor

    void display()
    {
        cout << "your complex number is " << a << "+" << b << "i" << endl;
    }
};
complex::complex(void)
{ //---->This is a default constructor as it takes no parameter
    a = 10;
    b = 20;
    // cout<<"hello world;"
}
int main()
{
    complex c1, c2, c3;
    c1.display();
    c2.display();
    c3.display();

    return 0;
}
/*properties of the constructor
1.It should the declared in the public section of the class
2.They are automatically invoked whenever the object is created
3.They cannot return values and do not have return type
4.It can have default argument
5.We cannot refer to their address
*/