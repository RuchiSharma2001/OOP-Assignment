#include<iostream>
#include<iomanip>
using namespace std;
float calcharge(float hours);
int main(){
    
    float n1,n2,n3;
    cout<<"Enter hours of 1 costumer: ";
    cin>>n1;
    cout<<"Enter hours of 2 costumer: ";
    cin>>n2;
    cout<<"Enter hours of 3 costumer: ";
    cin>>n3;
    cout<<"Car  "<<setw(13)<<"Hours"<<setw(13)<<"Charge"<<endl;
    cout<<"1    "<<setw(13)<<n1<<setw(13)<<calcharge(n1)<<endl;
    cout<<"2    "<<setw(13)<<n2<<setw(13)<<calcharge(n2)<<endl;
    cout<<"3    "<<setw(13)<<n3<<setw(13)<<calcharge(n3)<<endl;
    cout<<"Total"<<setw(13)<<n1+n2+n3<<setw(13)<<calcharge(n1)+calcharge(n2)+calcharge(n3);
}
float calcharge(float h){
    float charge = 2.0;
    if(h>0){
        if(h<=3)
            return charge;
        else if(h<=24) {
            while(h>3) {
                charge=charge+0.5;
                h--;
                if( charge>=10 )
                    charge=10;
            }
            return charge;
        }
    }
    else
        printf( "\nThe amount of time entered is not supported." );
}