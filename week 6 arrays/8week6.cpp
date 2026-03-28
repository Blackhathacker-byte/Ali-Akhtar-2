#include<iostream>
using namespace std;
main(){
   int hi=0;
char word[100];
cout<<"Enter word:";
cin>>word;
for(int i=0;word[i]!='\0';i++){
   cout<<"Letter "<<word[hi]<<" is at "<<i<<" position"<<endl;
   hi++;
}  
}
