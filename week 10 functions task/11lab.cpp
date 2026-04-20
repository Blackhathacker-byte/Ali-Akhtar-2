#include<iostream>
#include<cmath>
using namespace std;
char hi(char letter){
    if (letter == 'A'){
        cout<<"You entered capital "<<letter<<"";
    }
    else{
        cout<<" You entered small "<<letter<<"";
    }
}

int main(){
    char letter;
    cout<<"Enter the letter (A or a):";
    cin>>letter;
    cout <<" answer  "<<hi(letter);
}