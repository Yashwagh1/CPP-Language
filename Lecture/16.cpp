#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
} // call by using reference of pointer
void swapointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    // call by using reference varaiable
}
int &swapreferencevar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}
int main()
{
    int x = 4, y = 5;
    // they are not perform the swap number
    // cout<<"print the a"<< x <<"print the b"<< y <<endl;
    // cout<<"print the a"<< x <<"print the b"<< y <<endl; //they are swapped
    // swapointer(&x, &y);
    // cout<<"print the a"<< x <<"print the b"<< y <<endl;
    /// cout<<"print the a"<< x <<"print the b"<< y <<endl;//they are swapped
    cout << "\nprint the a" << x << "/\nprint the b" << y << endl;
    swapreferencevar(x, y) = 766;
    cout << "\nprint the a " << x << "\nprint the b" << y << endl;

    return 0;
}