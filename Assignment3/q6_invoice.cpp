#include<iostream>
#include<string>
using namespace std;

class Invoice{
    public:
        Invoice( string number, string description, int quantity, int price ){
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
        void setPartNumber( string number){
                partNumber = number;
        }
        void setPartDescription(string description ){
                partDescription = description;
        }
        void setItemQuantity(int quantity ){
            if(quantity>0)
                itemQuantity=quantity;
            else{
                itemQuantity=0;
                cout<<"Quantity was invalid."<<endl;
            }
        }
        void setItemPrice(int price ){
            if(price>0)
                itemPrice=price;
            else{
                itemPrice=0;
                cout<<"Price was invalid."<<endl;
            }
        }
        string getPartNumber(){
            return partNumber;
        }
        string getPartDescription(){
            return partDescription;
        }
        int getItemQuantity(){
            return itemQuantity;
        }
        int getItemPrice(){
            return itemPrice;
        }
        int getInvoiceAmount(){
            return itemQuantity*itemPrice;
        }
    private:
        string partNumber;
        string partDescription;
        int itemQuantity;
        int itemPrice;
};


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
