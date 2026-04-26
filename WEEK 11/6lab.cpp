#include<iostream>
using namespace std;
// 
main(){
 int matrix[5][5];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "Your entered matrix:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] <<  " ";
        }
        cout << endl;
    }
}