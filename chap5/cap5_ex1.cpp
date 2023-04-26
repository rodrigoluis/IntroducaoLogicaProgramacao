/*
1. Desenvolva uma função para imprimir todos os números pares no intervalo 1-100.
*/

#include <iostream>
using namespace std;

void printEvenNumbers()
{
    int i;
    for(i = 0; i <= 100; i+=2)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    printEvenNumbers();
    return 0;
}
