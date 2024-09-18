// Multilevel inheritance

#include <iostream>
using namespace std;
class Student
{
protected:
    int rollnumber;

public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};
void Student ::set_rollnumber(int r)
{
    rollnumber = r;
}
void Student ::get_rollnumber()
{
    cout << "The student roll no is " << rollnumber << endl;
}

class Marks : public Student
{
protected:
    float math;
    float physics;

public:
    void setdata(float, float);
    void getdata(void);
};
void Marks ::setdata(float m1, float m2)
{
    math = m1;
    physics = m2;
}
void Marks ::getdata(void)
{
    cout << "mark of the math is " << math << endl;
    cout << "marks of the physics is " << physics << endl;
}
class percentage : public Marks
{
    float percentage;

public:
    void display()
    {
        get_rollnumber();
        getdata();
        cout << "The percentage of the stident is " << (math + physics) / 2 << endl;
    }
};
int main()
{
    percentage yash;
    yash.set_rollnumber(45);
    yash.setdata(95.0, 80.0);
    yash.display();
    return 0;
}