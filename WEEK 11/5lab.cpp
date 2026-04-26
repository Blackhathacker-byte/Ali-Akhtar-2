#include <iostream>
using namespace std;
int main()
{
    int matrix[3][3];
    bool identitymatrix = true;
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "Your entered matrix:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] <<  " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] != 1)
                {
                    identitymatrix = false;
                    break;
                }
            }
            else
            {
                if (matrix[i][j] !=0)
                {
                    identitymatrix = false;
                    break;
                }
            }
            if (!identitymatrix)
            {
                break;
            }
        }
    }
    if(identitymatrix){
        cout<<" matrix is identity:";
    }
    else{
         cout<<" matrix is not identity:";
    }
}