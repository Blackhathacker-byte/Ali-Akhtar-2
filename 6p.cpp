#include<iostream>
using namespace std;
main(){

cout<<" Enter Paint Area: ";
float area;
cin>> area;

cout<<" Enter Width:";
float w;
cin>> w;

cout<<" Enter Height:";
float h;
cin>>h;

int walls;
walls= area/(w*h);

cout<<" No of walls painted= "<<walls<<" ";

}