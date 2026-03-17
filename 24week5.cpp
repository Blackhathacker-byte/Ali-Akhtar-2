#include<iostream>
using namespace std;
main(){
 int num,dig,fq,count=0;
 cout<<"Enter number:";
 cin>>num;
 cout<<"Enter digit:";
 cin>>dig;
 for(int i=num;i>0;i=i/10)
 {
     fq=i%10;
     if(fq==dig){
        count++;
     }
 }
          cout<<"frequency of your digit is="<<count<<"";
}