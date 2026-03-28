#include <iostream>
using namespace std;
main(){
    int n;
    string names[100];
    cout<<"Enter the number of students: ";
    cin>>n;
    cout<<"Enter the names of "<<n<<" students: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>names[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int x = 0; x < n - i - 1; x++) {      
            if (names[x]>names[x + 1]) {
                string l = names[x];
                names[x] = names[x + 1];
                names[x + 1] = l;
            }
        }
    }
    cout<<"Students in alphabetical order: "<<endl;
    for(int i=0;i<n;i++){
        cout<<names[i]<<endl;
    }}