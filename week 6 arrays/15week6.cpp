#include <iostream>
using namespace std;
main(){
    int num;
    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>>num;
    cout<<"Enter 2 elements for the first array, one per line:"<<endl;
    int lam[10];
    for(int x=0;x<num;x++)
    {
        cin>>lam[x];
    }
    int sec;
    cout<<"Enter the number of elements for the second array: ";
    cin>>sec;
    cout<<"Enter "<<sec<<" elements for the second array, one per line: "<<endl;
    int tam[100];
    for(int i=0; i<sec; i++)
    {
        cin>>tam[i];
    }
    
   
    cout<<"Resulting array: ["<<lam[0];
    for(int i=0;i<sec;i++)
    {
        cout<<", "<<tam[i];
    }
    cout<<", "<<lam[1]<<"]";

}