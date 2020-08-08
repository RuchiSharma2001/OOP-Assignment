#include<iostream>
#include<string>
using namespace std;
class date{
    int day,month,year;
    public:
    date(){
        day=1;
        month=1;
        year=1;
    }
    void setday(int d){
        day=d;
    }
     void setyear(int y){
        year=y;
    }
     void setmonth(int m){
         if(m>=1&&m<=12){
        month=m;
         }
        else
        {
            cout<<"INVALID MONTH\n";
        }
        
    }
    int getday(){
        return day;
    }
    int getyear(){
        return year;
    }
    int getmonth(){
        return month;
    }
    void display(){
        cout<<"Date is: "<<getday()<<"/"<<getmonth()<<"/"<<getyear();
    }
    
};
    int main(){
    int m,d,y; 
    cout<<"Enter day: ";
    cin>>d;
    cout<<"Enter month: ";
    cin>>m;
    cout<<"Enter year: ";
    cin>>y;
    date d1;
    d1.setday(d);
    d1.setyear(y);
    d1.setmonth(m);
    d1.display();
    return 0;
}