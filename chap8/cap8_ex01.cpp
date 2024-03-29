/*
1. Faça um algoritmo para exibir a soma de duas matrizes quadradas 3 x 3.  Crie uma função para ler uma matriz (será chamada duas vezes com parâmetros diferentes) e uma segunda função para imprimir a soma das matrizes passadas como parâmetro.
*/

#include <iostream>
using namespace std;

void readMatrix(int mat[3][3])
{
    int i, j;
    cout << "Informe os 9 valores da matriz: ";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >>mat[i][j];
        }
    }
}

void printSum(int m1[3][3], int m2[3][3])
{
    int i, j;
    cout << "\nMatriz resultante:\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << m1[i][j] + m2[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int mat1[3][3], mat2[3][3];
    
    // Read matrices
    readMatrix(mat1);
    readMatrix(mat2);

    // Print sum
    printSum(mat1, mat2);
    return 0;
}
