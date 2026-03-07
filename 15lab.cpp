#include<iostream>
using namespace std;
main(){
float salary=10000;
float laptop_price=50000;

float advance_per_month= salary * 0.5;
float advanec_6_month=advance_per_month*6;

if(advanec_6_month>= laptop_price){
    cout<<"ALI CAN BUY THE LAPTOP";


}

else{
    float months = laptop_price/advance_per_month;
    cout<<"Months requiured to buy tha laptop "<<months<<""; 
}
}