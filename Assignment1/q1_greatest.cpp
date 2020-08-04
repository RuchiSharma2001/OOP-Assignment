#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Greatest number is: ";
    if(a>b&&a>c)
        cout<<a;
    else if(b>a&&b>c)
        cout<<b;
    else
        cout<<c;
    return 0;
}