/*
Escreva uma função para receber a altura de um homem, calcular e imprimir o seu peso ideal com a fórmula pesoIdeal = (72.7 * altura - 58).
*/

#include <iostream>
using namespace std;

void computeIdealWeight(float height)
{
    float IdealWeight;
    IdealWeight = (72.7 * height - 58);
    cout << "Ideal Weight: " << IdealWeight << " kg\n";
}

int main()
{
    float height;
    cout << "Inform men's height: ";
    cin >> height;
    computeIdealWeight(height);
    return 0;
}
