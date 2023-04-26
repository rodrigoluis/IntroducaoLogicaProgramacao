/*
4. Desenvolva um algoritmo para ler uma matriz de números reais, um escalar e uma função que calcule a multiplicação da matriz pelo escalar. Imprima o resultado em uma segunda função.
*/

#include <iostream>
using namespace std;
#define N 3

void readMatrix(float mat[N][N])
{
    int i, j;
    cout << "Inform the values of this matrix: ";
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            cin >> mat[i][j];
        }
    }
}

void printMatrix(float m[N][N])
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

void multiplyByScalar(float m[N][N], float scalar)
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            m[i][j] = m[i][j] * scalar;
        }
    }
}

int main()
{
    float mat1[N][N], scalar;
    
    // Read matrices
    readMatrix(mat1);

    cout << "Inform a scalar: ";
    cin >> scalar;

    // Invert lines and columns
    multiplyByScalar(mat1, scalar);

    // Print sum
    cout << "\nResulting matrix:\n";
    printMatrix(mat1);
    return 0;
}
