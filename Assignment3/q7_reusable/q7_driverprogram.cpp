#include<iostream>
#include"q7_invoice.h"
using namespace std;
int main(){
    string number;
    string des;
    int quantity;
    int price;
    cout<<"First\n";
    cout<<"Part number: ";
    getline(cin,number);
    cout<<"Enter description: ";
    getline(cin,des);
    cout<<"Enter quantity: ";
    cin>>quantity;
    cout<<"Enter price: ";
    cin>>price;
    Invoice c1(number,des,quantity,price);
    cout<<"Second\n";
    cout<<"Part number: ";
    cin.ignore();
    getline(cin,number);
    cout<<"Enter description: ";
    getline(cin,des);
    cout<<"Enter quantity: ";
    cin>>quantity;
    cout<<"Enter price: ";
    cin>>price;
    Invoice c2(number,des,quantity,price);
    cout << "1. Part number is: "<< c1.getPartNumber()<< "\nPart description is: "<< c1.getPartDescription()<<endl;
    cout<< "Quantity is: "<< c1.getItemQuantity()<< "\nPrice per item is: "<< c1.getItemPrice()<< endl;
    cout<<"Total amount is: "<<c1.getInvoiceAmount()<<endl<<endl;
    cout << "2. Part number is: "<< c2.getPartNumber()<< "\nPart description is: "<< c2.getPartDescription()<<endl;
    cout<< "Quantity is: "<< c2.getItemQuantity()<< "\nPrice per item is: "<< c2.getItemPrice()<< endl;
    cout<<"Total amount is: "<<c2.getInvoiceAmount()<<endl<<endl;
    return 0;
}
