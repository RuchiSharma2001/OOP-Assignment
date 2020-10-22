
#include <iostream>
using namespace std;
class Student
{
public:
    Student()
    {
        cout<<"constructor of Student class  "<<endl;
    }
    void session()
    {
        cout << "session 2019-2023 " << endl;
    }
};
class UndergraduateStudent : public Student
{
public:
    UndergraduateStudent()
    {
        cout << " Undergraduate Class Derived from Student Class " << endl;
    }
    void course()
    {
        cout << "Course is B.tech " << endl;
    }
};
class junior : public UndergraduateStudent
{
public:
    void display()
    {
        cout << "Junior Class Derived From UnderGraduate Class " << endl;
    }
};
class senior : public UndergraduateStudent
{
public:
    void display()
    {
        cout << "senior Class Derived from Undergraduate Class" << endl;
    }
};
class Postgraduate : public Student
{
public:
    Postgraduate()
    {
        cout << "Postgraduate Class Derived from Student class " << endl;
    }
};

class DoctoralStudent : public Postgraduate
{
public:
    DoctoralStudent()
    {
        cout<<"constructor of doctoral Class"<<endl;
    }
    void course()
    {
        cout << "DoctoralStudent Class Derived From Postgraduate Class " << endl;
    }
};
class MastersStudent : public Postgraduate
{
public:
    void course()
    {
        cout << "MasterStudent Class Derived From Postgraduate Class " << endl;
    }
};
int main()
{
    UndergraduateStudent u;
    u.course();
    junior j;
    j.display();
    senior s;
    s.display();
    Postgraduate p;
    DoctoralStudent d;
    d.course();
    MastersStudent m;
    m.course();
    return 0;
}