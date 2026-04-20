#include<iostream>
#include<iomanip>
using namespace std;
void pool(float h ,int p1 , int p2, int volume){
float totalwater=(p1 + p2)*h;
// condition for not overflowing
if(totalwater<=volume){
 float howmuchthen=(totalwater/volume)*100;
 float p1contri,p2contri;
 p1contri=((p1*h)/totalwater)*100;
 p2contri=((p2*h)/totalwater)*100;

 cout<<"The pool is "<<howmuchthen<<" % full . Pipe 1 contribution "s<<p1contri<<" & Pipe 2 contribution "<<p2contri<<"";
}
// 2
else{
float overflow=totalwater-volume;
cout<<"For "<<h<<" , the overflow is "<<overflow<<" litres";    
}
}


int main(){
    float h;
    int p1,p2,volume;
    cout<<"Enter the volume of pool:";
     cin>>volume;
    cout<<"Enter flow rate of 1st pipe:";
    cin>>p1;
    cout<<"Enter flow rate of 2nd pipe:";
    cin>>p2;
    cout<<"Enter the hours during which workers are absent:";
    cin>>h;  
    pool( h , p1 ,p2 , volume);
}