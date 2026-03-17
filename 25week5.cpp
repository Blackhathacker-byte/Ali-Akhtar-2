#include<iostream>
using namespace std;
main(){
   int num,d,count=0;
   cout<<"Enter number:" ;
   cin>>num;
   for(int i=num;i>0;i=i/10)
   {
      d=i%10;
      count=count+d;
   }
   cout<<"Sum of digits is ="<<count<<"";
}