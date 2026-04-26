#include <iostream>
using namespace std;

// function for sorting
void forsorting(int matrix[][5], int n)
{
    int maxsum=-1;
     int maxcol;
    for (int col = 0; col < 5; col++)
    {
        int sum=0;
        for (int row = 0; row < n; row++)
        {     
             sum=sum+matrix[row][col];
        }
        if(sum>maxsum){
        maxsum=sum;
        maxcol=col;
        }
    }
    for(int row=0;row<3;row++){
        int temp=matrix[row][0];
        matrix[row][0]=matrix[row][maxcol];
        matrix[row][maxcol]=temp;
    }
    for(int row = 0; row < 3; row++){
    for(int col = 0; col < 5; col++){
        cout << matrix[row][col] << " ";
    }
    cout << endl;
}
}

main()
{
    cout << "Enter the size of row:";
    int n;
    cin >> n;
    int matrix[n][5];
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "ENTER THE ELEMENTS OF MATRIX:[" << row << "][" << col + 1 << "]";
            cin >> matrix[row][col];
        }
    }
     cout << "Original matrix " << endl;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "" << matrix[row][col] << " ";
        }
        cout << "" << endl;
    }
    cout << "Original2 matrix " << endl;
    forsorting( matrix, n);
}