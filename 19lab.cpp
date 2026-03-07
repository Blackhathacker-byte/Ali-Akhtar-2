#include<iostream>
using namespace std;
main(){
cout<<"Enter the country name:";
string name;
cin>>name;
cout<<"Enter the price in dollars:";
int price;
cin>>price;

if(name=="Ireland"){
    float d1;
    d1= (price) - (price)*0.1;
    cout<<" The price of ticket is = "<<d1;
}
else{
    float d2= (price) - (price)*0.05;
    cout<<"The price of ticket is = "<<d2;
}
}