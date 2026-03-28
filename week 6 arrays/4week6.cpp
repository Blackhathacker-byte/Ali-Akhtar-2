#include<iostream>
using namespace std;
main(){
    int count=0;
int five=5;
int num[five];
for(int i=1;i<=five;i++){
  cout<<"ENTER "<<i<<" number:";
  cin>>num[count];
  count++;
}
cout << "The 1st element in array is: " << num[0] << endl;
    cout << "The last element in array is: " << num[4] << endl;
    }