#include<iostream>
using namespace std;
main(){
int r=2;
float w=4.1;
float t=2.5;
cout<<"RED ROSES:";
int rnum;
cin>>rnum;
cout<<"WHITE ROSES:";
int wnum;
cin>>wnum;
cout<<"TULIPS:";
int tnum;
cin>>tnum;

float price=(rnum*2)+(wnum*4.1)+(tnum*2.5);

if(price>200){
    float pad= price - (price*0.2);
    cout<<"Original Price = "<<price<<""<<endl;
    cout<<"Price after discunt = "<<pad<<"";
}
else{
 cout<<"Original Price = "<<price<<""<<endl;   
}
}