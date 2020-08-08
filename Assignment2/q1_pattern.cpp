#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int r,c,i,j,k;
    cout<<"Enter number of rows: ";
    cin>>r;
    cout<<"Enter number of columns: ";
    cin>>c;
    for (i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==0||i==r-1||j==0||j==c-1)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
    cout<<"Enter total number of rows in a oval: ";
    cin>>r;
    for(i=0;i<r/2-1;i++)
    cout<<" ";
    for(i=0;i<r/2;i++)
        cout<<"*";
    cout<<"\n";
    int x=r;
    if(r/2>2){
        x=r-2;
    cout<<" *";
    for(i=0;i<r/2;i++){
        cout<<" ";}
    cout<<"*";
    cout<<"\n";}
    for(i=0;i<x;i++){
        for(j=0;j<r;j++){
        if(j==0||j==r-1)
        cout<<"*";
        else
        {
            cout<<" ";
        }}
        cout<<"\n";
    }
    if(r/2>2){
      cout<<" *";
    for(i=0;i<r/2;i++){
        cout<<" ";}
    cout<<"*";
    cout<<"\n";}
    for(i=0;i<r/2-1;i++)
     cout<<" ";
    for(i=0;i<r/2;i++)
        cout<<"*";
    cout<<"\n";
    cout<<"Length of arrow: ";
    cin>>r;;
    for(i=0;i<r;i++){
        for(j=1;j<r-i;j++)
        cout<<" ";
        for(k=0;k<=2*i;k++)
        cout<<"*";
        cout<<endl;

    }
    for(j=0;j<2*r;j++){
    for(i=0;i<=r;i++){
        if(i==r-1)
            cout<<"*";
        else
            cout<<" ";
    }
    cout<<endl;
    }
 
    cout<<"Enter number of rows in a diamond: ";
    cin>>r;
    for(i=0;i<=r;i++){
        for(j=1;j<=r-i;j++)
            cout<<" ";
        cout<<"*";
        for(k=0;k<2*i;k++){
            cout<<" ";
        }
        if(k!=0)
        cout<<"*";
        cout<<endl;
    }
    for(i=r-1;i>=0;i--){
        for(j=1;j<=r-i;j++)
            cout<<" ";
        cout<<"*";
        for(k=0;k<2*i;k++){
            cout<<" ";
        }
        if(k!=0)
        cout<<"*";
        cout<<endl;
    }
   
    return 0;
}