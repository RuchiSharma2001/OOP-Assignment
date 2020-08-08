#include<iostream>
#include<math.h>
using namespace std;
class rectangle{
    float x1,x2,y1,y2,x3,x4,y3,y4;
    public:
    int set(int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8){
        if(n1>=0&&n1<=20.0&&n2>=0&&n2<=20.0&&n3>=0&&n3<=20.0&&n4>=0&&n4<=20.0&&n5>=0&&n5<=20.0&&n6>=0&&n6<=20.0&&n7>=0&&n7<=20.0&&n8>=0&&n8<=20.0){
            cout<<"Rectangle is in first quadrant"<<endl;
        }
        x1=n1;
        y1=n2;
        x2=n3;
        y2=n4;
        x3=n5;
        y3=n6;
        x4=n7;
        y4=n8;
        int a=(x1-x2)*(x1-x2)-(y1-y2)*(y1-y2);
        a=sqrt(abs(a));
        int b=(x2-x3)*(x2-x3)-(y2-y3)*(y2-y3);
        b=sqrt(abs(b));
        int c=(x3-x4)*(x3-x4)-(y3-y4)*(y3-y4);
        c=sqrt(abs(c));
        int d=(x4-x1)*(x4-x1)-(y4-y1)*(y4-y1);
        d=sqrt(abs(d));
        if(a==b&&c==d||a==c&&b==d||a==d&&b==c){
            cout<<"It is a rectangle."<<endl;
            return 0;
        }
        else
        {
            cout<<"Not a rectangle."<<endl;
            return 1;
        }
    }
    int length(){
        int a=(x1-x2)*(x1-x2)-(y1-y2)*(y1-y2);
        a=sqrt(abs(a));
        int d=(x4-x1)*(x4-x1)-(y4-y1)*(y4-y1);
        d=sqrt(abs(d));
        if(a>d)
        return a;
        else
        return d;
    }
    int breadth(){
        int a=(x1-x2)*(x1-x2)-(y1-y2)*(y1-y2);
        a=sqrt(abs(a));
        int d=(x4-x1)*(x4-x1)-(y4-y1)*(y4-y1);
        d=sqrt(abs(d));
        if(a>d)
        return d;
        else
        return a;
    }
    int area(int l,int b){
        return l*b;
    }
    int perimeter(int l,int b){
        return 2*(l+b);
    }
    int predicate(){
        int a=(x1-x2)*(x1-x2)-(y1-y2)*(y1-y2);
        a=sqrt(abs(a));
        int d=(x4-x1)*(x4-x1)-(y4-y1)*(y4-y1);
        d=sqrt(abs(d));
        if(a==d)
            return 1;
        else
            return 0;
        
    }

    void rec(){
            int l=length();
            int b=breadth();
            int a=area(l,b);
            int p=perimeter(l,b);
            int y=predicate();
            cout<<"Length is: "<<l<<"\nBreadth is: "<<b<<"\nArea is: "<<a<<"\nPerimeter is: "<<p;
            if(y==1)
                cout<<"\nIt is a square also";
            else 
              cout<<"\nNot a square";
    }
    rectangle(int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8){
        int x=set(n1,n2,n3,n4,n5,n6,n7,n8);
        if(x==0){
            rec();
        }
    }
};
int main(){
    int n1,n2,n3,n4,n5,n6,n7,n8;
        cout<<"Enter first coordinate: ";
        cin>>n1;
        cin>>n2;
        cout<<"Enter second coordinate: ";
        cin>>n3;
        cin>>n4;
        cout<<"Enter third coordinate: ";
        cin>>n5;
        cin>>n6;
        cout<<"Enter fourth coordinate: ";
        cin>>n7;
        cin>>n8;
    rectangle r(n1,n2,n3,n4,n5,n6,n7,n8);
    return 0;
}