/*
Escreva uma função para receber a base e a altura de um triângulo. Esta função deve calcular e imprimir a sua área usando a equação Area = (Base * Altura) / 2.
*/

#include <iostream>
using namespace std;

float rightTriangleArea(float base, float height)
{
    float area;
    area = (base * height) / 2;
    return area;
}

int main()
{
    float area, base, height;
    cout << "Informe base e altura de um triângulo: ";
    cin >> base >> height;
    area = rightTriangleArea(base, height);
    cout << "Area: " << area << endl;
    return 0;
}
