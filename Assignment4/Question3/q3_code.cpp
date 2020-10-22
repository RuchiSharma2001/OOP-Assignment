
#include <iostream>
using namespace std;
class Quardilateral
{
public:
    Quardilateral()
    {
        cout << "Quardilateral is the base class" << endl;
    }
    void perimeter()
    {
        cout << "Perimeter " << endl;
    }
    void area()
    {
        cout << "Area " << endl;
    }
};

class Trapezoid : public Quardilateral
{
public:
    int a, b, c, d, e;
    float Area;
    Trapezoid()
    {
        cout << "Trapezoid is derived from Quardilateral class " << endl;
    }
    float area()
    {
        cout << "enter the length of parallel sides : " << endl;
        cin >> a >> b;
        cout << "enter the height : " << endl;
        cin >> c;
        Area = float(0.5* (a + b) * c);
        return Area;
    }
    float perimeter()
    {
        cout << "enter the length of non parallel sides : " << endl;
        cin >> d >> e;
        int Perimeter = a + b + d + e;
        return Perimeter;
    }
};
class Rectangle : public Quardilateral
{
public:
    float a, b;
    Rectangle()
    {
        cout << "Rectangle is derived from Quardilateral class " << endl;
    }
    float area()
    {
        cout << "enter the sides of rectangle : " << endl;

        cin >> a >> b;
        float Area = a * b;
        return Area;
    }
    float perimeter()
    {
        float Perimeter = 2 * (a + b);
        return Perimeter;
    }
};
class Sqaure : public Quardilateral
{
public:
    float a;
    Sqaure()
    {
        cout << "Square is derived from Quardilateral class " << endl;
    }
    float area()
    {
        cout << "enter the side of square : " << endl;
        cin >> a;
        float Area = a * a;
        return Area;
    }
    float perimeter()
    {
        float Perimeter = 4 * a;
        return Perimeter;
    }
};
class Parallelogram : public Quardilateral
{
public:
    float  b, c, d, height, base;
    Parallelogram()
    {
        cout << "Parallelogram is derived from Quardilateral class" << endl;
    }
    float area()
    {
        cout << "enter the base with coressponding height : " << endl;
        cin >> base >> height;
        float Area = base * height;
        return Area;
    }
    float perimeter()
    {
        cout << "enter the reamining  sides " << endl;
        cin >>b >> c >> d;
        float Perimeter = base+ b + c + d;
        return Perimeter;
    }
};
int main()
{
    int ch;
    float result;
        Trapezoid t;
        result = t.area();
        cout << "The Area of Trapezoid is : " << result << endl;
        result = t.perimeter();
        cout << "The paramter of Trapezoid is : " << result << endl;
        Rectangle r;
        result = r.area();
        cout << "the Area of Rectangle is : " << result<< endl;
        result = r.perimeter();
        cout << "the parameter of Rectangle is : " << result << endl;

        Sqaure s;
        result= s.area();
        cout << "the area of Square is : " << result<< endl;
        result = s.perimeter();
        cout << "the parameter of Square is : " << result << endl;
    
        Parallelogram P;
        result = P.area();
        cout << "Area of Parallelogram is : " << result<< endl;
        result = P.perimeter();
        cout << "Paramter of Parallelogram is : " << result << endl;
       return 0;
}