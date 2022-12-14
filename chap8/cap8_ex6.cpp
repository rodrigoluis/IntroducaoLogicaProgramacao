/*
Make an algorithm to read a 6 x 3 matrix and a function to generate two 3 x 3 
matrices, the first with the first 3 lines and the second with the last lines.
*/

#include <iostream>
using namespace std;
#define L 6
#define C 3
#define N 3


void readMatrix(int mat[L][C])
{
    int i, j;
    cout << "Inform the values of this matrix: ";
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            cin >> mat[i][j];
        }
    }
}

void printMatrix(int m[N][N])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void splitMatrix(int m[L][C], int m2[N][N], int m3[N][N])
{
    int i, j;
    for(i = 0; i < L; i++)
    {
        for(j = 0; j < C; j++)
        {
            if(i <= 2)
                m2[i][j] = m[i][j];
            else
                m3[i-3][j] = m[i][j];
        }
    }
}

int main()
{
    int m[L][C], m2[N][N], m3[N][N];
    
    // Read matrices
    readMatrix(m);

    // Invert lines and columns
    splitMatrix(m, m2, m3);

    // Print matrices
    cout << "\nFirst Matrix:\n";
    printMatrix(m2);
    cout << "\nSecond Matrix:\n";
    printMatrix(m3);    
    return 0;
}
