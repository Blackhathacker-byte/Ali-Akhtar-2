#include<iostream>
using namespace std;
main(){
    int n1,n2;
    int gcd;
  cout<<"Enter the first number:";
  cin>>n1;
  cout<<"Enter second numer:";
  cin>>n2;
  for(int i=1;i<=n1&&i<=n2;i++)
  {
     if(n1%i==0 && n2%i==0)
       gcd=i;
    
  }
         cout<<"GCD="<<gcd<<""<<endl;
         int lcm=(n1*n2)/gcd;
         cout<<"LCM="<<lcm<<"";
}
