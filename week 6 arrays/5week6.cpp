#include<iostream>
using namespace std;
main(){
    int no=0;
int numbers, num[numbers];
cout<<"Enter how many numbers do u want?:";
cin>>numbers;
for(int i=0;i<numbers;i++){
    cout<<"Enter a number:";
    cin>>num[i];
}
for(int i=0;i<numbers;i++){
    cout<<"Your entered num is:"<<num[i]<<""<<endl;
}
}