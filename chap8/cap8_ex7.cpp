/*
7. Faça um algoritmo para ler 3 vetores reais de dimensão 10 e uma função para gerar uma matriz (10 x 3) onde cada coluna é dada por um destes vetores.
*/

#include <iostream>
using namespace std;
#define N 10
#define C 3

void readArray(float vec[N])
{
    int i, j;
    cout << "Inform the values of the array: ";
    for(i = 0; i < N; i++)
    {
        cin >> vec[i];
    }
}


void printMatrix(float m[N][C])
{
    int i, j;
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < C; j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void generateMatrix(float m[N][C], float v1[], float v2[], float v3[])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < C; j++)
        {
            if(j == 0)
                m[i][j] = v1[i];
            if(j == 1)
                m[i][j] = v2[i];
            if(j == 2)
                m[i][j] = v3[i];                                
        }
    }
}


int main()
{
    float m[N][C];
    float v1[N], v2[N], v3[N];
    
    // Reading arrays
    readArray(v1);
    readArray(v2);
    readArray(v3);        

    // Generating matrix
    generateMatrix(m, v1, v2, v3);

    cout << "\nGenerated Matrix:\n";
    printMatrix(m);
    return 0;
}
