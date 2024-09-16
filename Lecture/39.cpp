#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};
/*fpr a protected members
                      public derivation       private derivation      protected derivation
1.private members       Not inherited           Not inherited           Not Inherited
2.Public members        public                  private                     protectd
3.protected members     protected               private                     protected */
class derived : protected base
{
};

int main()
{
    base b;
    derived d;
    // cout<<d.a;    the a is private member

    return 0;
}