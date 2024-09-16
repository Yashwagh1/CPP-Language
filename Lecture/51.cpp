// Pointer to object and arrow oject in C++

#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
// Arrow operator.

int main()
{
    // complex c;
    complex *ptr1 = new complex[4];
    // c.setdata(12,45);
    // c.getdata();
    // complex *ptr=&c;
    // (*ptr).setdata(12,45); //exactly same as the pointer
    ptr1->setdata(12, 45);
    // (*ptr).getdata();// is as good as
    ptr1->getdata();
    return 0;
}