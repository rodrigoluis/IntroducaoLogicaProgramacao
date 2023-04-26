/*
Construa um algoritmo para ler 5 valores inteiros, calcular e imprimir a soma desses valores.
*/

#include <iostream>
using namespace std;

int main()
{
    int v1, v2, v3, v4, v5, sum;    
    cout << "Informe 5 valores inteiros: ";
    cin >> v1 >> v2 >> v3 >> v4 >> v5;

    sum = v1 + v2 + v3 + v4 + v5;

    cout << "Soma dos valores: " << sum << endl;
    return 0;
}
