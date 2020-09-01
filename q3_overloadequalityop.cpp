#include <iostream> 
using namespace std; 
class Complex { 
    public: 
        Complex(int r = 0, int i =0){  
            real = r;   
            img = i; 
        } 
        friend istream & operator>>(istream &,Complex &); 
        friend bool operator == (const Complex &c1, const Complex &c2);
        friend bool operator != (const Complex &c1, const Complex &c2);
    private: 
        int real,img; 
}; 
bool operator== (const Complex &c1, const Complex &c2)
{
    return (c1.real == c2.real && c1.img == c2.img);
}
 
bool operator!= (const Complex &c1, const Complex &c2)
{
    return !(c1.real == c2.real && c1.img == c2.img);
}
istream & operator >> (istream & in,Complex & c) { 
    cout<<"\nEnter Real Part: "; 
    in>>c.real; 
    cout<<"Enter Imaginary Part: "; 
    in>>c.img; 
    return in; 
} 
int main(){ 
   Complex c1,c2; 
   cout<<"Enter first complex number: "; 
   cin>>c1;
   cout<<"Enter second complex number: ";
   cin>>c2;  
   if(c1==c2){
       cout<<"Complex numbers are equal";
   }
   if(c1!=c2){
       cout<<"Complex numbers are not equal";
   }
   return 0;
}