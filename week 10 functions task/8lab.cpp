#include<iostream>
#include<cmath>
int root1 , root2;
float deter(int a , int b , int c){
    int Add;
    Add=b^2 - (4*a*c);
    sqrt(Add);
root1= (-b + sqrt(Add)/2*a) ;
root2= (-b - sqrt(Add)/2*a);
}
using namespace std;
int main(){
int a , b , c;
cout<<" Enter a:";
cin>> a;
cout<<" Enter b:";
cin >> b;
cout<<" Enter c:";
cin >> c;
 cout<<" "<<deter(a , b ,c);
}