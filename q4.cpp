#include<iostream>
using namespace std;
int main(){
    string a;
    cout<<"Enter string: ";
    getline(cin,a);
    int n=a.size();
    int fg=0;
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1])
        {
            fg++;
            break;
        }
    }
    if(fg==0)
        cout<<a<<" is a palindrome string.";
    else
        cout<<a<<" is not a palindrome string.";
    return 0;

}