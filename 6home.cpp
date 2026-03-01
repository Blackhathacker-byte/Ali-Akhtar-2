#include<iostream>
using namespace std;
main(){

cout<<" Enter the weight of bag in pounds: ";
float w;
cin>> w;

cout<<" Enter the price : ";
float p;
cin>> p;

cout<<" Enter the square area bag can cover: ";
float sq;
cin>> sq;

float price;
price= p/w;

float Price;
Price= p/sq;

cout<<"cost of fertilizer per pound = "<<price<<"$ "<<endl;
cout<<"cost of fertilizer per square foot = "<<Price<<" $ ";

}