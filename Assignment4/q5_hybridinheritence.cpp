#include<iostream>
using namespace std;
class A{
    public:
        A(int x){
            cout<<"Parametrized constructor of class A "<<x<<endl;
        }
        A(){
            cout<<"Default constructor of class A "<<endl;
        }
        ~A(){
            cout<<"Destructor of class A "<<endl;
        }
    };
class B:public A{
public:
    B(int x):A(x){
        cout<<"Parametrized constructor of class B "<<x<<endl;
    }
    ~B(){
        cout<<"Destructor of class B "<<endl;
    }


};
class C:public A{
public:
    C(){
        cout<<"Default constructor of class C "<<endl;
    }
    ~C(){
        cout<<"Destructor of class C "<<endl;
    }

};
class D:public C,public B{
    public:
        D(int x):C(),B(x){
            cout<<"Parametrized constructor of class D "<<x<<endl;
        }
        ~D(){
            cout<<"Destructor of class D "<<endl;
        }
    };
int main(){
   D x(4);
   return 0;
}

