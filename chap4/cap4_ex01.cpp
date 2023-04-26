/*
1. Faça uma função para ler dois números inteiros e informar se o primeiro é maior, menor ou igual ao segundo.
*/

#include <iostream>
using namespace std;

void printGreater(int v1, int v2)
{
    if(v1 > v2)
    {
        cout << "Primeiro é o maior.\n";
    }
    else
    {
        if(v1 < v2)
        {
            cout << "Segundo é o maior.\n";
        }
        else
        {
            cout << "São iguais.\n";
        }
    }
}

int main()
{
    // Testing function
    int v1, v2;
    cout << "Informe dois inteiros: ";
    cin >> v1 >> v2;
    printGreater(v1, v2);
    return 0;
}
