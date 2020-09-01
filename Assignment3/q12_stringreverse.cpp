#include<iostream>
#include<cstring>
using namespace std;
void reverse(string &str, int s, int e){
    if(s<e){
        char t=str[s];
        str[s]=str[e];
        str[e]=t;
        reverse(str,s+1,e-1);
    }
}
int main(){
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    int e=str.length();
    reverse(str,0,e-1);
    str[e]='\0';
    cout<<"Reversed string is: "<<str;
    return 0;
}