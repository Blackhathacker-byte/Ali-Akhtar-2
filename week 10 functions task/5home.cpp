#include<iostream>
using namespace std;
// MOTORCYCLE
void pricem(int price){

 float taxprice=price*0.06;
 price=price+taxprice;
 cout<<"THE FNAL PRICE OF MOTORCYCLE AFTER ADDING TAX IS "<<price<<"";   
}
// Electric
void priceE(int price){
 float taxprice=price*0.08;
 price=price+taxprice;
 cout<<"THE FNAL PRICE OF ELECTRICCAR AFTER ADDING TAX IS "<<price<<"";   
}
// sedan
void prices(int price){
 float taxprice=price*0.1;
 price=price+taxprice;
 cout<<"THE FNAL PRICE OF SEDAN AFTER ADDING TAX IS "<<price<<"";   
}
// van
void priceV(int price){
 float taxprice=price*0.12;
 price=price+taxprice;
 cout<<"THE FNAL PRICE OF VAN AFTER ADDING TAX IS "<<price<<"";   
}
// truck
void priceT(int price){
 float taxprice=price*0.15;
 price=price+taxprice;
 cout<<"THE FNAL PRICE OF TRUCK AFTER ADDING TAX IS "<<price<<"";   
}


int main(){
cout<<"Enter vehicle type(M/E/S/V/T):";
char hey;
cin>>hey;
cout<<"Enter vehicle price:";
int price;
cin>>price;
if(hey=='M'){
pricem(price);
}
if(hey=='E'){
priceE(price);
}
if(hey=='S'){
prices(price);
}
if(hey=='V'){
priceV(price);
}
if(hey=='T'){
priceT(price);
}
}
