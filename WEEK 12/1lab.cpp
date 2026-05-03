#include<iostream>
using namespace std;
int main() {
int x = 10;
int *ptr=&x;
cout<<" THE "<<x<<"\n";
cout<<" The "<<ptr<<"\n";
cout<<" the "<<*ptr<<" \n";
cout<<" the "<<&x<<" \n";
return 0;
}