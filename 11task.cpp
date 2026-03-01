#include<iostream>
using namespace std;
main(){

cout<<"Enter the current world population:";
float population;
cin>>population;

cout<<"Enter the monthly birth rate(number of births per month):";
float birth;
cin>>birth;

float bandekine;
bandekine= population * birth;

cout<<" Population in three decades will be "<<bandekine<<" ";

}
