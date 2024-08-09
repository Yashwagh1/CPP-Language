// static variable in class

#include <iostream>
using namespace std;
class employee
{
    
    int Id;
    static int count;
    

public:
    void setdata(void)
    {
        cout << "Enter the Id :-" << endl;
        cin >> Id;\
        count++;
    }
    void getdata(void)
    {
        cout << "The Id of the employee is " << Id <<" and this is employee number is "<<count<< endl;
    }
    static void getCount(void){
        cout<<"Print the employee count "<<count;
    }
    
};
int employee :: count ;// default value is zero

int main()
{
    employee yash, hemant, soham;
    // Yash.id = 1;
    // Yash.count = 1;     cannot be do this as id is and count are private
    yash.setdata();
    yash.getdata();
    employee::getCount();
    hemant.setdata();
    hemant.getdata();
    employee::getCount();
    soham.setdata();
    soham.getdata();
    employee::getCount();

    return 0;
}