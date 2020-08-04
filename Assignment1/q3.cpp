#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter total number of digits in an array: ";
    cin>>n;
    int a[n];
    cout<<"Enter contents of array: \n";
    for (i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        int key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    cout<<"Sorted array:\n";
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}