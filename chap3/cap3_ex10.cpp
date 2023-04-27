/*
Faça uma função que receba 9 números reais. Os 6 primeiros representam as coordenadas x e y de 3 pontos. Os 3 últimos números reais, passados por referência, devem armazenar o comprimento (l) da linha formada por estes 3 pontos, dois a dois, através da equação l = √[(x₂ - x₁)² + (y₂ - y₁)²]. O cálculo do comprimento deve ser feito através de uma segunda função, que receberá 4 parâmetros (coordenadas x e y de dois pontos) e retornará o comprimento calculado. Dica: Pesquise as funções sqrt e pow disponíveis no C++.
*/

#include <iostream>
#include <cmath>

using namespace std;

float calcularComprimento(float x1, float y1, float x2, float y2)
{
   return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void calcularComprimentos(float x1, float y1, float x2, float y2, float x3, float y3, 
                          float &l1, float &l2, float &l3)
{
   l1 = calcularComprimento(x1, y1, x2, y2);
   l2 = calcularComprimento(x2, y2, x3, y3);
   l3 = calcularComprimento(x3, y3, x1, y1);
}

int main()
{
   float x1, y1, x2, y2, x3, y3, l1, l2, l3;

   cout << "Digite as coordenadas do ponto 1 (x1 y1): ";
   cin >> x1 >> y1;

   cout << "Digite as coordenadas do ponto 2 (x2 y2): ";
   cin >> x2 >> y2;

   cout << "Digite as coordenadas do ponto 3 (x3 y3): ";
   cin >> x3 >> y3;

   calcularComprimentos(x1, y1, x2, y2, x3, y3, l1, l2, l3);

   cout << "Comprimento do segmento formado pelos pontos 1 e 2: " << l1 << endl;
   cout << "Comprimento do segmento formado pelos pontos 2 e 3: " << l2 << endl;
   cout << "Comprimento do segmento formado pelos pontos 3 e 1: " << l3 << endl;

   return 0;
}
