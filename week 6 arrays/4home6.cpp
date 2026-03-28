#include<iostream>
using namespace std;
 main()
{
    string a[100];
    cout<<"Enter the names of 5 students: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>a[i];
     }
    cout<<"Students Names are: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<a[i]<<endl;
     }}