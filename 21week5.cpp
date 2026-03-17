#include<iostream>
using namespace std;
main(){
    int mul=1;
cout<<"Enter number for multiplication table:";
int num;
cin>>num;
for(int i=1;i<=10;i++)
{
  mul=num;
  mul=mul*i;
  cout<<""<<num<<"*"<<i<<"="<<mul<<""<<endl;
  
  
}
}