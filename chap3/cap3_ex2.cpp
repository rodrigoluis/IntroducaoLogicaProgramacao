/*
Escreva uma função para receber por parâmetro o raio de uma esfera e calcular o seu volume através da fórmula V = (4 * PI * R3) /3.
*/

#include <iostream>
#include <cmath>
using namespace std;

float sphereVolume(float r)
{
    float v;
    v = (4 * M_PI * r * r * r) / 3.0;
    return v;
}

int main()
{
    float volume;
    volume = sphereVolume(3.0);
    cout << "Volume: " << volume << endl;
    return 0;
}
