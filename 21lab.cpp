#include<iostream>
using namespace std;
main(){
    cout<<" Temprature of city 1:";
    int temp1;
    cin>>temp1;
    cout<<" Temprature of city 2:";
    int temp2;
    cin>>temp2;
    float diff= temp1-temp2;

    if(diff>10){
    cout<<" Difference is too big"<<endl;
    cout<<" program ends";

    }
    else{
    cout<<" progrram ends ";
    }
    
}