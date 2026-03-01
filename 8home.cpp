#include<iostream>
using namespace std;
main(){

cout<<"Enter vegetable price per kg(in coins):";
float v;
cin>>v;

cout<<"Enter fruit price per kg(in coins):";
float fprice;
cin>>fprice;

cout<<" Total vegetable in kilograms:";
float vtotal;
cin>>vtotal;

cout<<" Total fruit in kilograms:";
float ftotal;
cin>>ftotal;

float VPRICE;
VPRICE= vtotal*(v/1.94);

float FPRICE;
FPRICE= ftotal*(fprice/1.94);

float total;
total= VPRICE + FPRICE;

cout<<" Total earning in Rupees(rps)="<<total<<" ";

}

