#include<iostream>
using namespace std;
main(){

cout<<"ENTER THE VOLTAGE:";
float Voltage;
cin>> Voltage;

cout<<"ENTER THE CURRENT:";
float Current;
cin>> Current;

float Power;
Power= Voltage*Current;

cout<<"The power is "<<Power<<" Watts";

}