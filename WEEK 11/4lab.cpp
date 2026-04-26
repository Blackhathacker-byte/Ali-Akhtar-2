#include<iostream>
using namespace std;
main(){
    cout<<"Enter rowsize:";
    int rowsize;
    cin>>rowsize;
    int sum=0;
    int elements[3][3];
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<rowsize;j++){
        cout<<"Enter the elements of matrix:["<<i<<"]["<<j<<"]:";
       cin>>elements[i][j];
       sum=sum+ elements[i][j];
        }
    }
    cout<<"SUM :"<<sum<<"";
}