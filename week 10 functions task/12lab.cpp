#include<iostream>
#include<cmath>
using namespace std;
bool busy(char number[])
{
   if( number[0]==number[2]){
    return true;
   }
   else{
    return false;
   }
}
  int main(){
    char number[3];
    cout<<"Enter number:";
    cin>>number[0]>>number[1]>>number[2];

    if(busy(number) ){
     cout<<" yes number is symmetrical";
    }
    else{
    cout<<" no number is not symmetrical";
    }
}