#include<iostream>
using namespace std;
 main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers:"<<endl;
    int clo[n];
    for (int i = 0; i < n; i++)
    {
       cin>>clo[i];}
       int largest=clo[0];
       int smallest=clo[0];
       for (int i = 0; i < n; i++){
       if(clo[i]>largest){
       largest=clo[i];}
       if(clo[i]<smallest)
    {
       smallest= clo[i];
    }
}
cout<<"Largest Number: "<<largest<<endl;
cout<<"Smallest number: "<<smallest<<endl;
}