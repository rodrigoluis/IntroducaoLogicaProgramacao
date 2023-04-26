/*
4. Escreva uma função que receba 3 vetores de números reais e um inteiro que representará o tamanho dos vetores (tamanho é o mesmo para os 3 vetores). A função deve somar os valores dos dois primeiros vetores no terceiro. Imprima o terceiro em outra função. 
*/

#include <iostream>
using namespace std;

void sumArrays(float v1[], float v2[], float v3[], int size)
{
    for(int i = 0; i < size; i++)
    {
        v3[i] = v1[i] + v2[i]; 
    }
}

void printArray(float v[], int size)
{
    cout << "Vetor: ";
    for(int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main()
{
    float array1[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float array2[5] = {10.0, 22.0, 33.0, 44.0, 55.0};    
    float array3[5];

    sumArrays(array1, array2, array3, 5);
    
    printArray(array3, 5);
    return 0;
}
