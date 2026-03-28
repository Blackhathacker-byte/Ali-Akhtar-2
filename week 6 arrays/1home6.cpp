#include<iostream>
using namespace std;
 main()
{
    int n,sum=0;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers:"<<endl;
    int clo[n];
    for (int i = 0; i < n; i++)
    {
       cin>>clo[i];
       sum=sum+clo[i];
    }
    cout<<"Sum of all elements: "<<sum;
}
    