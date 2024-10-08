//
#include <iostream>
#include <fstream>
using namespace std;
template <class T>
class vector
{
public:
    int *arr;
    int size;

public:
    vector(int m) : size(m)
    {
        arr = new int[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3);
    v1.arr[2] = 6;
    v1.arr[0] = 4;
    v1.arr[1] = 5;
    vector<float> v2(3);
    v2.arr[0] = 2;
    v2.arr[2] = 8;
    v2.arr[1] = 9;
    int a = v1.dotProduct(v2);
    cout << a << endl;
    return 0;
}