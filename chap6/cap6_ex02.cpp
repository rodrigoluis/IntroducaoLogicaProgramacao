/*
2. Desenvolva uma função que receba um vetor de números reais, seu tamanho e um escalar. A função deve efetuar a multiplicação deste vetor pelo escalar. Imprima o vetor modificado em outra função.
*/

#include <iostream>
using namespace std;

void multiplyByScalar(float v[], int size, float scalar)
{
    for(int i = 0; i < size; i++)
    {
        v[i] = v[i]*=scalar; // Could use v[i] *= scalar;
    }
}

void printArray(float v[], int size)
{
    cout << "Vetor: ";
    for(int i = 0; i < size; i++)
    {
        cout << v[i] << "  ";
    }
    cout << endl;
}


int main()
{
    float array[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    float scalar = 2.5;
    
    multiplyByScalar(array, 6, scalar);
    printArray(array, 6);
    return 0;
}
