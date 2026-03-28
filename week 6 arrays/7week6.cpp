#include<iostream>
using namespace std;
main(){
   string name;
   cout<<"Enter name:";
   cin>>name;
   bool isfound=false;
   cout<<"Enter word:";
   char word;
   cin>>word;

   for(int i=0;name[i] != '\0';i++){
       if(name[i]==word){
        isfound=true;
        break;
       }
    }
       if(isfound==true){
        cout<<""<<word<<" is found in name";
       }
       else{
        cout<<"Word is not found ";       }
   }
