#include<iostream>
using namespace std;
main(){

cout<<"ENTER THE CHARGE (Q) IN COLOUMB: ";
float Charge;
cin>>Charge;

cout<<"ENTER THE TIME(t) :";
float Time;
cin>>Time;

float Current;
Current = Charge/Time;

cout<<"THE CURRENT(I)="<<Current<<" AMPERES";



}