#include<iostream>
using namespace std;
int oddishandevenish(int num){
  int sum;
  int d1,d2,d3,d4,d5;
  d1=(num/10)%10;
  num=num/10;
  d2=(num/10)%10;
  num=num/10;
  d3=(num/10)%10;
  num=sum/10;
  d4=(num/10)%10;
  num=num/10;
  d5=(num/10)%10;
  num=num/10;
  sum=d1,d2,d3,d4,d5;
    if(sum%2==0){
     cout<<"NUmber is evenish";
    } 
    if(sum%2!=0){
    cout<<" Number is oddishh";
    }
    return 0;
}
 int main(){
    int num;
    cout<<"Enter a number";
    cin>>num;
    oddishandevenish(num);         
 }   
