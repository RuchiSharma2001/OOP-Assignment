#include<iostream>
using namespace std;
int main(){
    int n,rev;
    cout<<"Enter number: ";
    cin>>n;
    int n1=n;
    while(n1!=0){
        int d=n1%10;
        rev=d+rev*10;
        n1=n1/10;
    }
    if(n==rev)
        cout<<n<<" is a pallindrome.";
    else
        cout<<n<<" is not a pallindrome.";
    return 0;
}