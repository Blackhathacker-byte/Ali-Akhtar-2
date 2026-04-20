#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int angle , hdistance,Height;
    float radians;
    cout<<" ENTER HORIZONTAL DISTANCE:";
    cin>>hdistance;
    cout<<" ENTER ANGLE IN degrees:   ";
    cin>> angle;
    radians = angle*57.2985;
    Height= hdistance * tan(radians);
    cout<<" height of tree "<<Height;
}