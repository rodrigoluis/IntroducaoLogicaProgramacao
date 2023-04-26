/*
2. Faça uma função que receba uma matriz quadrada 5 x 5 e a converta em uma matriz identidade. Imprima a matriz gerada em outra função.
*/

#include <iostream>
using namespace std;
#define N 5

void readMatrix(int mat[N][N])
{
    int i, j;
    cout << "Informe os valores da matriz: ";
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
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

void convertToIdentity(int m[N][N])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(i == j)
                m[i][j] = 1;
            else
                m[i][j] = 0;
        }
    }
}

int main()
{
    int mat1[N][N];
    
    // Read matrices
    readMatrix(mat1);

    // Invert lines and columns
    convertToIdentity(mat1);

    // Print sum
    cout << "\nMatriz resultante:\n";
    printMatrix(mat1);
    return 0;
}
