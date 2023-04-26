/*
8. Crie uma estrutura que represente um círculo. Esta estrutura terá como único campo o seu raio. A classe deve conter métodos para atribuir valor à este raio e para imprimir a área do círculo (A = π * r²). A classe deve verificar se o valor do raio é maior do que zero, imprimindo uma mensagem de erro caso contrário. A classe também deve verificar se o raio foi corretamente atribuído antes de imprimir a área do círculo.
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Circle {
   // Fields
   float radius= 0;

   // Functions
   void setRadius(float r)
   {
      if(r <= 0)
      {
         cout << "Raio tem que ser maior que zero." << endl;
         return;
      }
      radius= r;
   }
   void printArea() {
      float area;
      if(radius)
      {
         area = radius * radius* M_PI;
         cout << "Área do círculo: " << area << endl;
      }
      else
         cout << "Raio não foi informado." << endl;
   }
};
   
int main()
{
   Circle c1;
   c1.printArea();   // Print error message   
   c1.setRadius(-1); // Another error message
   c1.setRadius(5);
   c1.printArea();
}
