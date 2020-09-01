#include <iostream> 
using namespace std; 
class Complex { 
    public: 
        Complex(int r = 0, int i =0){  
            real = r;   
            img = i; 
        } 
        friend ostream & operator<<(ostream &,Complex const &); 
        friend istream & operator>>(istream &,Complex &); 
    private: 
        int real,img; 
}; 
istream & operator >> (istream & in,Complex & c) { 
    cout<<"Enter Real Part: "; 
    in>>c.real; 
    cout<<"Enter Imaginary Part: "; 
    in>>c.img; 
    return in; 
} 
ostream & operator << (ostream & out, Complex const & c) { 
    out<<c.real<<"+i"<<c.img<<endl; 
    return out; 
} 
int main(){ 
   Complex c1; 
   cin>>c1; 
   cout<<"Complex number is: "; 
   cout<<c1; 
   return 0;
}