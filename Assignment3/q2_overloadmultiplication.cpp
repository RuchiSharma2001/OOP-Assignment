#include <iostream> 
using namespace std; 
class Complex { 
    public: 
        Complex(int r = 0, int i =0){  
            real = r;   
            img = i; 
        } 
        friend istream & operator>>(istream &,Complex &); 
        friend Complex operator *(Complex const &, Complex const &);
        void print(){
            cout<<real<<"+i"<<img<<endl;
        }
        private: 
        int real,img; 
}; 
istream & operator >> (istream & in,Complex & c) { 
    cout<<"\nEnter Real Part: "; 
    in>>c.real; 
    cout<<"Enter Imaginary Part: "; 
    in>>c.img; 
    return in; 
} 
Complex operator *(Complex const & c1,Complex const & c2){
    return Complex(c1.real*c2.real-c1.img*c2.img,c1.real*c2.img+c1.img*c2.real);
}
int main(){ 
   Complex c1,c2;
   cout<<"Enter first complex number: "; 
   cin>>c1;
   cout<<"Enter second complex number: ";
   cin>>c2; 
   Complex c3=c1*c2;
   c1.print();
   c2.print();
   cout<<"Product is: ";
   c3.print();
   return 0;
}