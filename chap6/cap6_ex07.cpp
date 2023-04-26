/*
7. Faça uma função para receber um vetor de números inteiros, seu tamanho e um valor a ser procurado neste vetor. A função deve retornar o número de ocorrências deste valor no vetor.
*/

#include <iostream>
using namespace std;

int countOccurrences(int array[], int size, int value)
{
    int counter = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] == value)
            counter++;
    }
    return counter;
}

int main()
{
    int v[10] = {15, 18, 7, 6, 5, 8, 9, 16, 15, 17};
    int value = 15;
    int count = countOccurrences(v, 10, value);
    cout << "Número de ocorrências de " << value << " no vetor foi " << count << ".\n"; 
    return 0;
}
