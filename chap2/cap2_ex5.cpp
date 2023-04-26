/*
Construa um algoritmo para ler 6 valores reais, calcular e imprimir a média desses valores.
*/

#include <iostream>
using namespace std;

int main()
{
    float v1, v2, v3, v4, v5, v6, average;    
    cout << "Insert 6 real values: ";
    cin >> v1 >> v2 >> v3 >> v4 >> v5 >> v6;

    average = (v1 + v2 + v3 + v4 + v5 + v6) / 6.0;

    cout << "Average: " << average << endl;
    return 0;
}
