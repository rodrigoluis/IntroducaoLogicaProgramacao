/*
1. Faça um algoritmo para ler um vetor de números reais de tamanho 6 e imprimir a média aritmética dos elementos deste vetor.
*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    float vet[6], sum = 0, mean;
    
    cout << "Inform 6 values: ";
    for(i = 0; i < 6; i++)
    {
        cin >> vet[i];
        sum+=vet[i];
    }
    mean = sum / 6.0;
    cout << "Average: " << mean << endl;
    return 0;
}
