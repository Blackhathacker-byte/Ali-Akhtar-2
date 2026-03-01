#include<iostream>
using namespace std;
main(){

cout<<" Enter Initial Velocity: ";
float vi;
cin>> vi;

cout<<" Enter accelration : ";
float a;
cin>> a;

cout<<" Enter Time(s): ";
float t;
cin>>t;

float vf;
vf = a*t/vi;

cout<<" The Final Velocity = "<<vf<<" ";

}

