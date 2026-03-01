#include<iostream>
using namespace std;
main(){

cout<<" Enter Paint Area: ";
float area;
cin>> area;

cout<<" Enter Width of single wall:";
float w;
cin>> w;

cout<<" Enter Height of single wall:";
float h;
cin>>h;

int walls;
walls= area/(w*h);

cout<<" No of walls you can paint= "<<walls<<" ";

}