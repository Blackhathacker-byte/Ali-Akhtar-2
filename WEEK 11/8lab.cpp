#include <iostream>
using namespace std;
void count(int matrix[][3], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool same=true;
        for (int o = 0; o < 3; o++)
        {
            
            if (matrix[i][o] != matrix[i + 1][o])
            {
                same = false;
                break;
            }
        }

         if(same)
        {
            count++;
        }
    }
    cout << "The identical rows are: " << count << " ";
}

main()
{
    cout << "Enter the number of rows:";
    int n;
    cin >> n;
    int matrix[n][3];
    for (int i = 0; i < n; i++)
    {
        for (int o = 0; o < 3; o++)
        {
            cout << "Enter the elemets of matrix [" << i << "][" << o << "]:";
            cin >> matrix[i][o];
        }
    }
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << "" << matrix[x][y] << " ";
        }
        cout << "" << endl;
    }
    count(matrix, n);
}