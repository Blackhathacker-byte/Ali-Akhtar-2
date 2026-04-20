#include<iostream>
using namespace std;
void sum(int num1 , int num2){
    int sum = num1 + num2;
     cout<< "sum = s"<<sum;
}

int main(){
  int num1,num2;
  cout<<"Enter 1st num:";
  cin>>num1;
  cout<<"Enter 2nd num:";
  cin>>num2;
  sum (num1 , num2);

}