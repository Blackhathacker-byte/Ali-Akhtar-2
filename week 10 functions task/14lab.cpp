#include<iostream>
#include<cmath>
using namespace std;
int add(int num1 , int num2){
    num2=num2+15;
    int d1;
    if(num2>60){
    num1=num1+1;
    num2=num2%60;
    cout<<""<<num1<<":"<<num2<<"";
  }
  else{
    cout<<""<<num1<<":"<<num2<<"";
  }
  return 0;
}
int main(){
 int num1,num2;
 cout<<"Enter hours:";
 cin>>num1;
 cout<<"Enter minutes:";
 cin>>num2;
 add(num1 , num2); 
}