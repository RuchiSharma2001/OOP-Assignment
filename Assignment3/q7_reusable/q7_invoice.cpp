#include<iostream>
#include"q7_invoice.h"
using namespace std;
Invoice::Invoice(string number, string description, int quantity, int price ){
    partNumber=number;
    partDescription=description;
    if(quantity>0)
       itemQuantity=quantity;
    else{
        itemQuantity=0;
        cout<<"Quantity was invalid."<<endl;
    }
    if(price>0)
       itemPrice=price;
    else{
        itemPrice=0;
        cout<<"Price was invalid."<<endl;
    }
}
void Invoice::setPartNumber( string number){
    partNumber = number;
}
void Invoice::setPartDescription(string description ){
    partDescription = description;
}
void Invoice::setItemQuantity(int quantity ){
    if(quantity>0)
        itemQuantity=quantity;
    else{
        itemQuantity=0;
        cout<<"Quantity was invalid."<<endl;
        }
    }
void Invoice::setItemPrice(int price ){
    if(price>0)
        itemPrice=price;
    else{
        itemPrice=0;
        cout<<"Price was invalid."<<endl;
    }
}
string Invoice::getPartNumber(){
    return partNumber;
}
string Invoice::getPartDescription(){
    return partDescription;
}
int Invoice::getItemQuantity(){
    return itemQuantity;
}
int Invoice::getItemPrice(){
    return itemPrice;
}
int Invoice::getInvoiceAmount(){
    return itemQuantity*itemPrice;
}