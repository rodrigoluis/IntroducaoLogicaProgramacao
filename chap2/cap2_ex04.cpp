/*
Construa um algoritmo para ler 5 valores inteiros, calcular e imprimir a soma desses valores.
*/

#include <iostream>
using namespace std;

int main()
{
    int v1, v2, v3, v4, v5, sum;    
    cout << "Insert 5 integer values: ";
    cin >> v1 >> v2 >> v3 >> v4 >> v5;

    sum = v1 + v2 + v3 + v4 + v5;

    cout << "Sum of the values: " << sum << endl;
    return 0;
}
