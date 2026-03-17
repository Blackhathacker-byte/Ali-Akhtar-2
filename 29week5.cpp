#include<iostream>
using namespace std;
main(){
    int money, year;
    int tospend=0;
    cout<<"Enter money:";
    cin>>money;
    cout<<"Enter year:";
    cin>>year;
    for(int i=1800; i<=year; i++){
        int age = 18 + (i - 1800);
        if(i%2== 0){
            tospend = tospend + 12000;
        }
        else{
            tospend = tospend + (12000 + 50 * age);
        }
    }

    if(money >= tospend){
        cout<<"Yes! He will live a carefree life and will have "<<(money-tospend)<<" dollars left";
    }
    else{
        cout<<"He will need "<<(tospend-money)<<" dollars to survive";
    }
}