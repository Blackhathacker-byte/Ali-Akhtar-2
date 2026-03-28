#include <iostream>
using namespace std;
main(){
int seats[100],flight[100];
string des[100];
int num;
cout<<"Enter number of flights: ";
cin>>num;
cout<<endl;
for (int i = 0; i < num; i++)
{
    cout<<"Enter flight number for flight "<<i+1<<": ";
    cin>>flight[i];
    cout<<endl;

    cout<<"Enter destination for flight "<<flight[i]<<": ";
    cin>>des[i];
    cout<<endl;

    cout<<"Enter seats available for flight "<<flight[i]<<": ";
    cin>>seats[i];
    cout<<endl;
}
cout<<"Flight Information:"<<endl;
cout<<"-------------------"<<endl;
for (int i = 0; i < num; i++)
{
     cout<<"Flight "<<flight[i]<<" to "<<des[i]<<" has "<<seats[i]<<" available."<<endl;
}
cout<<"Flights with less than 5 seats available:"<<endl;
cout<<"-----------------------------------------"<<endl;
bool found =false;
for (int i = 0; i < num; i++)
{if(seats[i]<5)
    {
     cout<<"Flight "<<flight[i]<<" to "<<des[i]<<" has only "<<seats[i]<<" left."<<endl;
     found = true;
}}
if(!found){
    cout<<"No flights with less than 5 seats available.";
}
    }

