#include<iostream>
using namespace std;
main(){
cout<<"Holidays:";
int h;
cin>>h;
int wd= 365-h;
int tfg= wd*63 + h*127;
int np=30000-tfg;


if(np>0){
    int timeh=np/60;
int timem=np%60;
    cout<<"Tom sleeps well"<<endl;
    cout<<""<<timeh<<" hours and "<<timem<<" minutes less for play";
}

else{
    np = -np;  // convert to positive
    int timeh=np/60;
int timem=np%60;
    cout<<"Tom will run away"<<endl;
    cout<<""<<timeh<<" hours and "<<timem<<" minutes for play";
}
}