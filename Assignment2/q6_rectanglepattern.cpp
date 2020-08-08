#include<iostream>
#include<math.h>
using namespace std;
class rectangle{
    char fillcharacter,perimetercharacter;
    float x1,x2,y1,y2,x3,x4,y3,y4;
    public:
    void setfillcharacter(char ch1){
        fillcharacter=ch1;
    }
    void setpeimetercharacter(char ch2){
        perimetercharacter=ch2;
    }
    public:
    int set(int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8){
        if(n1>=0&&n2>=0&&n3>=0&&n4>=0&&n5>=0&&n6>=0&&n7>=0&&n8>=0){
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
    }
    
    rectangle(int n1,int n2,int n3,int n4,int n5,int n6,int n7,int n8){
        int x=set(n1,n2,n3,n4,n5,n6,n7,n8);
            
    }
    void display(){
        
        for(int k=0;k<25;k++){
        for(int i=0;i<25;i++){
                if(k>=y2&&k<=y1&&i>=x1&&i<=x3)
                cout<<fillcharacter;
                    
                else
                    cout<<perimetercharacter;
        }
            cout<<"\n";
        }
    }
    };
int main(){
   char ch1,ch2;
   int l,b;
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
   cout<<"Enter fill character: ";
    cin>>ch1;
    r.setfillcharacter(ch1);
    cout<<"Enter perimeter character: ";
    cin>>ch2;
    r.setpeimetercharacter(ch2);
    r.display();
    return 0;
}