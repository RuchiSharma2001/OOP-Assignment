#include<iostream>
using namespace std;
void print(int a[],int s,int e){
    if(s<e){
        cout<<a[s]<<" ";
        print(a,s+1,e);
    }
}
int main(){
    int e,i;
    cout<<"Enter limit of array: ";
    cin>>e;
    int a[e];
    cout<<"Enter elements in an array: ";
    for(i=0;i<e;i++)
        cin>>a[i];
    cout<<"Elements in array are: ";
    print(a,0,e);
    return 0;
}