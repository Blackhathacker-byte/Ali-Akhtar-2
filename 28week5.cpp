#include<iostream>
using namespace std;
main(){
    int increment=10;
    int remaining,required;
    int dollars=0, toys=0;
    int tprice;
    int age,price1,price2;
    int saving;
cout<<"Enter lily's age:";
cin>>age;
cout<<"Enter the price of washing machine:";
cin>>price1;
cout<<"Enter unit price of each toy:";
cin>>price2;
for(int i=1;i<age;i=i+2)
{
    toys=toys+1;
}
    tprice=toys*price2;
 for(int j=2;j<=age;j=j+2)
 {
     dollars=dollars+(increment-1);
     increment=increment+10;
 }
     saving=tprice+dollars;
     if(saving>=price1){
       remaining=saving-price1;
        cout<<"YES! "<<endl;
        cout<<""<<remaining<<"";
     }
     if(saving<price1){
        required=price1-saving;
        cout<<"NO!"<<endl;
        cout<<""<<required;
    }
}