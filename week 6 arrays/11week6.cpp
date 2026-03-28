#include<iostream>
using namespace std;
main(){
    int count=0;
int element;
char num[100];
cout<<"how many nums do u want:";
cin>>element;
cout<<"Enter "<<element<<" numbers one per line"<<endl;
for(int i=0;i<element;i++){
 cin>>num[i];
 count++;
}
for(int j=count;j>=0;j--){
 cout<<""<<num[count]<<"";
 count--;
}
}