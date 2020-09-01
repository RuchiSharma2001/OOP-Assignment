#include<iostream>
using namespace std;
int min(int ar[],int s,int e){
    if(s<e){
        if(ar[s]>ar[e]){
            int t=ar[s];
            ar[s]=ar[e];
            ar[e]=t;
        }
    }
    if(s==e){
        return ar[s];
    }
    min(ar,s,e-1);
}
int main(){
    int e,i;
    cout<<"Enter limit of array: ";
    cin>>e;
    int a[e];
    cout<<"Enter elements in an array: ";
    for(i=0;i<e;i++)
        cin>>a[i];
    int x= min(a,0,e-1);
    cout<<"Minimum element is: "<<x;
    return 0;
}