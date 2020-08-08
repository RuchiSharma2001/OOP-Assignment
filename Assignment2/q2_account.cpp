#include<iostream>
using namespace std;
class account{
    int balance;
    public:
        account(int bal){
            if(bal>=0)
                this->balance=bal;
            else{
                this->balance=0;
                cout<<"Invalid initial balance";
        }
        }
        int credit(int c)
        {
            balance=balance+c;
            return 0;
        }
        int debit(int d){
            if (balance>d){
                balance=balance-d;
                return 1;
            }
            else {
                cout<<"Debit amount exceed amount balance";
                return 0;}
        }
        int getbalance(){
            return balance;
        }
};
int main(){
    int n1,n2,t;
    cout<<"Enter account balance of person to whom money to be transferred: ";
    cin>>n1;
    account a1(n1);
    cout<<"Enter initial balance of person who will transfer money: ";
    cin>>n2;
    account a2(n2);
    cout<<"Enter amount to be transferred: ";
    cin>>t;
    int x=a2.debit(t);
    if(x==1){
        cout<<"Money is transferred successfully..";
        a1.credit(t);
    }    
    else
        cout<<"\nMoney transfer fail due to insufficient balance..";
    cout<<"\nCurrent balance in account in which money was transferred is: "<<a1.getbalance();
    cout<<"\nCurrent balance in account from which money was transferred is: "<<a2.getbalance();
    return 0;
}