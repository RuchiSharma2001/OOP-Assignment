#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i,fg=0;
    cout<<"Enter number: ";
    cin>>n;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            fg=1;
            break;
        }
    }
    if(fg==0)
        cout<<n<<" is a prime number.";
    else
        cout<<n<<" is not a prime number.";
        return 0;
}