#include<iostream>
using namespace std;
 main()
{
    float a[100];
    cout<<"Enter quarters : ";
    cin>>a[0];
    a[0]=a[0]*0.25;
    cout<<"Enter dimes: ";
      cin>>a[1];
      a[1]=a[1]*0.10;
    cout<<"Enter nickels: ";
      cin>>a[2];
      a[2]=a[2]*0.05;
    cout<<"Enter pennies: ";
      cin>>a[3];
      a[3]=a[3]*0.01;
    cout<<"Enter the total amount due: $";
      cin>>a[4];
      a[5]=a[0]+a[1]+a[2]+a[3];
      if (a[5]>=a[4])
      {
        cout<<"Can you pay the amount? yes";
      }
      else{
        cout<<"Can you pay the amount? No";
      }



    }
