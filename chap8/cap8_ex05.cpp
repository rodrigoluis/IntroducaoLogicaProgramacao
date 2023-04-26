/*
5. Faça um algoritmo para ler uma matriz quadrada de dimensão 10, uma função que encontre o maior valor desta matriz e outra função que encontre o menor valor. Imprima os valores encontrados na função principal.
*/

#include <iostream>
using namespace std;
#define N 3

void readMatrix(int mat[N][N])
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

int findLowest(int m[N][N])
{
    int i, j;
    int lowest = m[0][0];
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(m[i][j] < lowest)
                lowest = m[i][j];
        }
    }
    return lowest;
}

int findHighest(int m[N][N])
{
    int i, j;
    int highest = m[0][0];
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(m[i][j] > highest)
                highest = m[i][j];
        }
    }
    return highest;
}

int main()
{
    int mat[N][N];
    int lowest, highest;
    
    // Read matrices
    readMatrix(mat);

    // Find lowest and highest
    lowest  = findLowest(mat);
    highest = findHighest(mat);

    // Print sum
    cout << "Lowest value:  " << lowest << endl;
    cout << "Highest value: " << highest << endl;    

    return 0;
}
