#include <iostream>
using namespace std;
int main(){
    int a[1000],i,j,k;
    for(i=0;i<1000;i++)
        a[i]=1;
    for(j=2;j<1000;j++){
        if(a[j]==1){
            for (k=j;k<1000;k++) {
                if (k%j==0&&k!=j)
                    a[k]=0;
            } 
        }
    }
    cout<<"Prime numbers from 2 to 999 are: "<<endl;
    for(i=2;i<1000;i++){
        if(a[i] == 1)            
            cout<<i<< " is a prime number"<<endl;
    }
    return 0;
}
