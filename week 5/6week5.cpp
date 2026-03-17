#include<iostream>
using namespace std;
main(){
int fq, count=0;

cout<<"ENTER number: ";
int number;
cin>> number;

cout<<" ENTER THE DIGIT :";
int dig;
cin>>dig;

for(int i = number ; i>0 ; i= i / 10  )
{
       fq = i % 10;
         if(fq == dig){
         count++;
  }
}
 cout<<" FREQUENCY = "<<count<<" "<<endl;
}