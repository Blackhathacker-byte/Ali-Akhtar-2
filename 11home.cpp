#include<iostream>
using namespace std;
main(){

cout<<" Enter Age:";
float age;
cin>> age;

cout<<" Enter moves:";
float moves;
cin>> moves;

int AverageYears;
AverageYears= age/(moves+1);

cout<<" Average no of years lived in a same house= "<<AverageYears<<" ";
}