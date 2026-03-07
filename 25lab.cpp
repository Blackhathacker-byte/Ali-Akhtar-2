#include<iostream>
using namespace std;
main(){
string nos;
cout<<"ENTER SHAPE:";
cin>> nos;

if(nos=="square"){
cout<<"enter side length:";
float l1;
cin>>l1;
float As= l1*l1;
cout<<" the area is = "<<As<<"";
}

if(nos=="rectangle"){
cout<<" enter length:";
float l2;
cin>>l2;
cout<<" enter width:";
float w1;
cin>>w1;
float Ar= l2 * w1;
cout<<" The AREA = "<<Ar<<"";
}

if(nos=="circle"){
    cout<<"enter radius of circle:";
    float r1;
    cin>>r1;

    float Ac=(r1*r1)*3.14;
    cout<<" the area of circle "<<Ac<<"";
}

if(nos=="triangle"){
    float b1 , h1;
    cout<<"enter the base:";
    cin>>b1;
    cout<<"enter the height:";
    cin>>h1;
    float At= (b1*h1)*0.5;
    cout<<"the area is = "<<At<<"";

}
}