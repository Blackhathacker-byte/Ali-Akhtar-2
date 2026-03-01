#include<iostream>
using namespace std;
main(){

cout<<"ENTER THE NUMBER OF WINS:";
int wins;
cin>>wins;

cout<<"ENTER THE NUMBER OF LOSES:";
int loses;
cin>>loses;

cout<<"ENTER THE NUMBER OF DRAWS:";
int draws;
cin>>draws;

float points;
points= (wins)*3 + (draws)*1;

cout<<" Pakistan has obtained "<<points<<" points";

}
