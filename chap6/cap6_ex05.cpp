/*
5. Escreva um algoritmo que leia um vetor de inteiros. Após a leitura, faça um algoritmo que encontre o menor valor do vetor e imprima este valor e sua posição (índice).
*/

#include <iostream>
using namespace std;

int main()
{
    int array[10]; // = {15, 18, 7, 6, 5, 8, 9, 16, 15, 17};
    int size = 10;         
    int index, value;

    // Read array
    for(int i = 0; i < size; i++)
    {
        cout << "[" << i << "]: ";
        cin >> array[i];
    }

    // Initialize the index and value with first element data
    index = 0;
    value = array[0];

    // find smallest
    for(int i = 1; i < size; i++)
    {
        if(array[i] < value)
        {
            index = i;
            value = array[i];
        }
    }

    cout << "Menor valor: " << value << " / Índice: " << index << ".\n";

    return 0;
}
