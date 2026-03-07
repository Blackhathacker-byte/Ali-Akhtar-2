#include<iostream>
using namespace std;
main(){
cout<<" Enter the character in lower case:";
char letter;
cin>> letter;

if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u'){
cout<<" The character is vowel";
}

else if(letter>='0' && letter<='9'){

cout<<" The character is number";

}

else{
    cout<<" THE NUMBER IS CONSONANT";
}
}