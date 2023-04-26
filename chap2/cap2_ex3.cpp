/*
Construa um algoritmo que faça a leitura de uma temperatura em graus Celsius e a apresente convertida em Fahrenheit. A fórmula de conversão: F = (9*C+160)/5.
*/

#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;    
    cout << "Insira a temperatura em celsius: ";
    cin >> celsius;

    fahrenheit = (9*celsius+160)/5.0;

    cout << "Temperatura em Fahrenheit: " << fahrenheit << endl;
    return 0;
}
