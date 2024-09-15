// virtual base class example
/*
student --> test
student --> sports
test --> result
sports --> result
*/
#include <iostream>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "your roll number is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "your result is here :"
             << "maths : " << math<<endl;
             cout<< "physics : " << physics << endl;
    }
};
class sport : virtual public student
{
protected:
    float score;

public:
    void set_score(float s)
    {
        score = s;
    }
    void print_score(void)
    {
        cout << "your PT score is " << score;
    }
};
class result : public test, public sport
{
protected:
    float total;

public:
    void display(void)
    {
        total = math + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total is " << total << endl;
    }
};
int main()
{
    result yash;
    yash.set_number(4200);
    yash.set_marks(78.4, 99.6);
    yash.set_score(9);
    yash.display();

    return 0;
}