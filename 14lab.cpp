#include<iostream>
using namespace std;
main(){
    cout<<"enter your bill";
    float bill;
    cin>> bill;
float bill2;
    bill2=bill - (bill*0.1);
float bill3;
bill3=bill - (bill*0.05);

    if(bill>5000){

    cout<<"your discounted bill is "<<bill2<<"";


    }

    if(bill<=5000){
        cout<<"your discounted bill "<<bill3<<"";
    }
    }