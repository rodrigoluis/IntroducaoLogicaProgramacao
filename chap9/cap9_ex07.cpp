/*
7. Crie duas estruturas, uma representando um ponto (x, y) e uma segunda representando uma linha. Esta segunda estrutura será composta por dois pontos (p1 e p2) e terá funções para atribuir valores para p1 e p2. Esta estrutura terá também uma função que retornará o comprimento (l) da linha formada pelos pontos p1 e p2 através da equação l = √[(x₂ - x₁)² + (y₂ - y₁)²].
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
   float x, y;
};

struct Line
{
   // Fields
   Point p1, p2;

   // Functions
   void setP1(float x, float y)
   {
      p1.x = x;
      p1.y = y;
   }
   void setP2(float x, float y)
   {
      p2.x = x;
      p2.y = y;
   }
   float getLength()
   {
      return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
   }
};

int main()
{
    Line l1;
    l1.setP1(2.0, 3.0);
    l1.setP2(4.0, 7.5);
    cout << "Line length: " << l1.getLength() << endl;
    return 0;
}

