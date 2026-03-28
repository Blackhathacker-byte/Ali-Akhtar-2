
#include<iostream>
using namespace std;
main(){
    int sum=0;
    int num[5]={1,2,3,4,5};
    for ( int i=0;i<5;i++){
        sum=sum+num[i];
    } 
    float average=sum/5;
    cout<<"sum is:"<<sum<<""<<endl;
    cout<<"Average is:"<<average<<""<<endl;
}