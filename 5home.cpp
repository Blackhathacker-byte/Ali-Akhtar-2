#include<iostream>
using namespace std;
main(){

cout<<"Enter the name of person: ";
string name;
cin >> name;

cout<<"Enter the weight loss in kilograms: ";
float kg;
cin>> kg;

float days;
days= kg*15;

cout<<" "<<name<<" will need "<<days<<"days to lose "<<kg<<"kg by doctor suggestion ";

}
