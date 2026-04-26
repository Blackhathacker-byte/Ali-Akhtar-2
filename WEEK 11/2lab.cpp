#include <iostream>
using namespace std;
void printCars(int cardata[][5], int rowsize);
main()
{
    const int rowsize = 5;
    const int colsize = 5;
    int cardata[rowsize][colsize] = {
        {7, 8, 10, 12, 9},
        {3, 4, 5, 6, 7},
        {4, 5, 6, 7, 8},
        {10, 12, 14, 16},
        {30, 22, 12, 4, 5}};
    printCars(cardata, rowsize);
}
void printCars(int cardata[][5], int rowsize)
{
    for (int row = 0; row < rowsize; row++)
    {
        for(int col=0;col < 5 ;col++){
           cout<<""<<cardata[row][col]<<" \t";
        }
        cout<<""<<endl;
    }
}