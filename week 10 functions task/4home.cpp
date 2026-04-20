#include<iostream>
using namespace std;
float formillimeter(float calculation)
{
 float formillimeters=calculation*(1000);
 cout<<"Answer is "<<formillimeters<<" cubic meters";
}
float forcentimeter(float calculation)
{
    float centimeters=(calculation)*100; 
    cout<<"Answer is "<<centimeters<<" cubic meters"; 
}
float meter(float calculation)
{
  float meters=calculation*1;     
  cout<<"Answer is "<<meters<<" cubic meters"; 
}

int main(){
float l,h,w;
cout<<"Enter length , width and height(in metres):"<<endl;
cin>>l;
cin>>h;
cin>>w;
float calculation= (l*h*w)/3;
cout<<"Enter output unit (millimeter , centimeter , meters):";
string uu;
cin>>uu;
if(uu=="meters"){
 meter(calculation);   
}
if(uu=="Centimeter"){
forcentimeter(calculation);
}
if(uu=="meter"){
 meter(calculation);   
}
}