#include<iostream>
using namespace std;
main(){
int n;
cout<<" enter the positive number: ";
cin>>n;
while(n<=0)
{
 cout<<" ERROR "<<n<<" is not a positive number "<<endl;
 cout<<"Please enter the positive number ";
 cin>>n;
}
cout<<" Program ends";
}