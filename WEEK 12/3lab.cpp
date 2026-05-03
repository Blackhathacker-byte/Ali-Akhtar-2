#include <iostream>
using namespace std;
main()
{
    int value=10;
    int &change=value;
    cout<<"  : "<<change<<" \n";  
    cout<<" Original y : "<<value<<" \n";   
     change=40;
    cout<<" New y      : "<<value<<" ";

}