#include<iostream>
using namespace std;
 main()
{
   string a,result = "";
   char vowels[]={'a','e','i','o','u','A','E','I','O','U'}; 
    
cout<<"Enter the argument 'a' : ";
getline(cin, a);
for(int i=0; i<a.length();i++){
    bool isVowel=false;
    for (int x = 0; x < 10; x++)
    {
if(a[i]==vowels[x]){
 isVowel=true;
 break;
}}

if(!isVowel){
    result += a[i];
}}
cout<<"String with vowels removed: " << result << endl;


}
