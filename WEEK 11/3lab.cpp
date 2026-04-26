#include <iostream>
using namespace std;
void toyotablue(int cardata[][5], int rowsize)
{
    cout << "" << cardata[1][3];
}
void redcarswhole(int cardata[][5], int rowsize)
{
    int sum=0;
    for (int row = 0; row < 5; row++)
    {
           sum = sum +cardata[row][0];
        
    }
}
void nissangtr(int cardata[][5] , int rowsize ){
       int sum=0;
       for(int i=0;i<5;i++){
        sum = sum + cardata[2][i];
       }
}
void printcolorcarsavailable(){

}
main()
{
    const int rowsize = 5;
    const int colsize = 5;
    int cardata[rowsize][colsize] = {
        {7, 8, 10, 12, 9},
        {3, 4, 5, 6, 7},
        {4, 5, 6, 7, 8},
        {10, 12, 14, 16},
    };
}
