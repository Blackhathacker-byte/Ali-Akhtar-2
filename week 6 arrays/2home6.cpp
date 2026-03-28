#include<iostream>
using namespace std;
 main(){
    int n,count=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers:"<<endl;
    int clo[n];
    for (int i = 0; i < n; i++)
    {
       cin>>clo[i];
        if (clo[i] %2==0)
        {
            count++;
        }
    }
        cout<<"Total even numbers: "<<count<<endl;

}