#include<iostream>
using namespace std;
main(){

cout<<"Enter name of movie:";
string name;
cin>> name;
cout<<"Enter the price of adult ticket:";
float p;
cin>> p;
cout<<"Enter the price of child ticket:";
float P;
cin>> P;
cout<<"Enter No. of adult tickets sold:";
float A;
cin>> A;
cout<<"Enter No. of child tickets sold:";
float C;
cin>> C;
cout<<"Enter the percentage you want to donate to charity:";
float per;
cin>> per;
float Totalmoney;
Totalmoney= (A*p) + (C*P);
float donated;
donated= Totalmoney*(per/100);
float left;
left= Totalmoney - donated;
cout<<" MOVIE:"<<name<<" "<<endl;
cout<<" TOTAL MONEY EARNED FROM TICKET SALES: "<<Totalmoney<<" "<<endl;
cout<<" DONATION TO CHARITY: "<<donated<<" "<<endl;
cout<<" Remaining amount after donation "<<left<<" "<<endl;
}




