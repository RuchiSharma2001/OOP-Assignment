#include <iostream>
#include<cstring> 
using namespace std; 
bool Pallin(string str,int s, int e) {
    if (s == e) 
        return true; 
    if (str[s] != str[e]) 
        return false; 
    if (s < e + 1) 
        return Pallin(str, s + 1, e - 1); 
    return true; 
} 
int main(){ 
    string str; 
    getline(cin,str);
    int n = str.length(); 
    if (Pallin(str,0,n-1)) 
        cout << "Yes"; 
    else
        cout << "No"; 
    return 0; 
} 