#include<iostream>
using namespace std;
class Employee
{
    private:
    int a, b, c;
    public:
    int d, e;

    void setdata (int a1, int b1, int c1);//declaration 
    void getdata (){
        cout<<"The value of the a is "<<a<<endl;
        cout<<"The value of the b is "<<b<<endl;
        cout<<"The value of the c is "<<c<<endl;
        cout<<"The value of the d is "<<d<<endl;
        cout<<"The value of the e is "<<e<<endl;
    }
};
    void Employee:: setdata(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }






int main()
{
    Employee yash;
    // yash.a = 1;
    yash.d = 18;
    yash.e = 12;
    
    yash.setdata(1, 2, 4);
    yash.getdata();


return 0;
}