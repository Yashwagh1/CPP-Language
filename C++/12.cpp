// Pointer Topic
#include <iostream>
using namespace std;
int main()
{
  // what is a pointer------> pointer is a data type
  // which hold address of other data type
  int a = 3;
  int *b = &a;
  //&----> (value of) Address of the operator

  cout << "print the address of b:" << b << endl;
  cout << "print the address of a:" << &a << endl;
  //* -------> Dereference of the operator
  cout << "the value at address of b is " << *b << endl;

  int **c = &b; // pointer to pointer address store.
  cout << "the address of c is" << c << endl;
  cout << "the address of &b is" << &b << endl;
  cout << "the value of c is" << *c << endl;
  cout << "the value at address value_at(value_at(c)) is" << **c << endl;

  return 0;
}