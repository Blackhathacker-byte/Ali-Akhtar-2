#include <iostream>
using namespace std;
main(){
    int num;
    
    cout<<"Enter the number of elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" numbers, one per line:"<<endl;

    int dam[num];
    for(int x=0; x<num ; x++)
    {
        cin>>dam[x];
    }
    int largest = dam[0];
    for(int i=1; i<num; i++)
{
    if(dam[i]>largest){
        largest=dam[i];
    }
    
}cout<<"The largest number entered is: "<<largest;
}