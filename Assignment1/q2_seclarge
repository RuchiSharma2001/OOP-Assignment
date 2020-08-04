#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter total numbers: ";
    cin>>n;
    int a[n];
    cout<<"Enter contents of array: ";
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"Second largest number is: "<<a[n-2]<<endl;
    cout<<"Second smallest number is: "<<a[1];
    return 0;
}