#include <iostream>
using namespace std;
main(){
    int n,co=0;
    string names[100];
    cout<<"Enter the number of customers: ";
    cin>>n;
    cout<<"Enter the names of "<<n<<" customers: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>names[i];

    }
    char l;
    cout<<"Enter a letter to check: ";
    cin>>l;
    for (int i = 0; i < n; i++)
    {
        if(names[i][0]==l)
        co++;
    }
    cout << "Total names starting with '"<< l <<"': "<<co<<endl;
}