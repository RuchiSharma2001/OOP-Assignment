#include<iostream>
#include<cmath>
#define pi 3.14
using namespace std;
class Shape{
protected:
    int s;
};
class TwoDShape:public Shape{
protected:
    int Area;
public:
    int calculateArea()
    {
        return Area;
    }
    };
class ThreeDShape:public Shape{
protected:
    double Volume;
public:
    double calculateVolume()
    {
        return Volume;
    }
    };
class Square:public TwoDShape{
public:
    Square(int side=0)
    {
        s=side;
        Area=s*s;
    }
    };
class rectangle:public TwoDShape{
protected:
    int l;
public:
    rectangle(int length,int breadth)
    {
        l=length;
        s=breadth;
        Area=l*s;
    }
    };
class sphere:public ThreeDShape{
public:
    sphere(int radius=0)
    {
        s=radius;
        Volume=4.0/3.0*(pi*pow(s,3));
    }
    };
class cone:public ThreeDShape{
protected:
    int h;
public:
    cone(int height,int radius)
    {
        h=height;
        s=radius;
        Volume=1.0/3.0*(pi*pow(s,2)*h);
    }

};
int main()
{
    sphere sp(5);
    rectangle r(2,3);
    cone c(2,3);
    Square sq(3);
    cout<<"Area of Rectangle is :"<<r.calculateArea()<<endl;
    cout<<"Area of Square is :"<<sq.calculateArea()<<endl;
    cout<<"Volume of Cone is :"<<c.calculateVolume()<<endl;
    cout<<"Volume of Sphere is :"<<sp.calculateVolume()<<endl;
    return 0;
}

