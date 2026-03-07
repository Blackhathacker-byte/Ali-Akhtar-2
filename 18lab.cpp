#include<iostream>
using namespace std;
main(){
    cout<<"Enter the first brother name :";
    string name1;
    cin>> name1;
    cout<<"Enter the first brother age:";
    int age1;
    cin>> age1;
    cout<<"Enter the 2nd brother name :";
    string name2;
    cin>> name2;
    cout<<"Enter the 2nd brother age :";
    int age2;
    cin>> age2;
    cout<<"Enter the third brother name :";
    string name3;
    cin>> name3;
    cout<<"Enter third brother age:";
    int age3;
    cin>> age3;

if(age1<age2){
if(age1<age3){
    cout<<""<<name1<<" is the younger";
}}    

if(age2<age1){
if(age2<age3){
cout<<" "<<name2<<" is the youngest";
}}

if(age3<age1){
if(age3<age2){
cout<<""<<name3<<" is the youungest";
}}
}