#include<iostream>
using namespace std;
main(){
    int count=0;
char word[100];
cout<<"enter the string:";
cin>>word;
while(word[count]!='\0'){
  count++;
}
cout<<"REVERSED STRING:";
for(int i=count;i>=0;i--){
    cout<<word[i];
}
}