#include<iostream>
using namespace std;
class rectangle{
    float l,b;
    public:
    void setl(float len){
        if(len>0.0&&len<20.0){
            l=len;
        }
        else{
            cout<<"Assign some valid value.";
        }
    }
    void setb(float br){
        if(br>0.0&&br<20.0){
            b=br;
        }
        else{
            cout<<"Assign some valid value.";
        }
    }
    float getl(){
        return l;
    }
     float getb(){
        return b;
    }

    float perimeter(){
       
        return (2*(l+b));
    }
    float area(){
        return (l*b);
    }
    rectangle(){
        l=1;
        b=1;
    }

};
int main(){
    float len,br;
    cout<<"Enter length: ";
    cin>>len;
    cout<<"Enter breadth: ";
    cin>>br;
    rectangle rec;
    rec.setl(len);
    rec.setb(br);
    float perimeter=rec.perimeter();
    float area=rec.area();
    cout<<"Area is: "<<area<<endl;
    cout<<"Perimeter is: "<<perimeter;
    return 0;
}