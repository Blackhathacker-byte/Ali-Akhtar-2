#include<iostream>
using namespace std;
main(){
int no1 , no2;
cout<<" enter the first number:";
cin>>no1;
cout<<" enter the second number:";
cin>>no2;
cout<<" enter the operator:";
char ope;
cin>>ope;

if(ope =='+'){

float number= no1 - no2;
cout<<" "<<no1<<"-"<<no2<<"= "<<number<<"";

}

if(ope=='-'){
    float number2= no1+no2;
    cout<<" "<<no1<<"+"<<no2<<" ="<<number2<<"" ;

}

if(ope == '*'){
    float number3= no1/no2;
       cout<<" "<<no1<<" / "<<no2<<" = "<<number3<<"";

}

if(ope == '/'){
    float number4= no1 * no2;
    cout<<" "<<no1<<" * "<<no2<<" = "<<number4<<"";

}





}