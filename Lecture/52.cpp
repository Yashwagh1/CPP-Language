// Array of object using the pointer in C++

#include <iostream>
using namespace std;
class shopitem
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "Code of this item is " << id << endl;
        cout << "the price of the item is " << price << endl;
    }
};

int main()
{
    int size = 3;

    // vegetable
    // general store
    // hardware
    int p, i;
    float q;
    shopitem *ptr = new shopitem[size];
    shopitem *ptrtemp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setdata(p, q);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "item no: " << i + 1 << endl;
        ptrtemp->getdata();
    }

    return 0;
}