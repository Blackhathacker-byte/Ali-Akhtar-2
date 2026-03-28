#include <iostream>
using namespace std;
main(){
    int num;
    cout<<"Enter the number of resistors in the series circuit: ";
    cin>>num;
    cout<<"Enter the resistance values (in ohms) of the "<<num<<" resistors, one per line: "<<endl;
    int res[50];
     float sum = 0;
    for(int x=1; x<=num; x++)
    {
        cin>>res[x];
       
        sum=sum+res[x];
    }
    cout<<"The total resistance of the series circuit is "<<sum<<" ohms.";
}