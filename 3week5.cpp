#include<iostream>
using namespace std;
main(){
int n1=0 , n2=1 , next;
cout<<" Enter the number of fibonacci series do u want ";
int no;
cin>>no;
cout<<" "<<n1<<" , "<<n2<<"";
for(int i=1 ; i < no-1; i++){
    next=n1+n2;
    cout<<" , "<<next<<" ";
    n1=n2;
    n2=next;
}
}