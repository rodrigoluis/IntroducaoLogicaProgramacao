/*
Faça uma função que receba um vetor de números reais, um número real chamado busca e dois inteiros passados por referência. A função armazenar nas variáveis passadas por referência quantos valores são menores e quantos são maiores ou iguais ao valor da variável busca.
*/

#include <iostream>
using namespace std;

void contaMenoresMaiores(float numeros[], int tamanho, float busca,
                         int &menores, int &maiores)
{
   menores = 0;
   maiores = 0;
   for (int i = 0; i < tamanho; i++)
   {
      if (numeros[i] < busca)
      {
         menores++;
      }
      else
      {
         maiores++;
      }
   }
}

int main()
{
   float numeros[5] = {1.2, -3.4, 5.6, -7.8, 9.0};
   float busca = 2;
   int menores, maiores;
   contaMenoresMaiores(numeros, 5, busca, menores, maiores);
   cout << "Quantidade de números menores que " << busca << ": " << menores << endl;
   cout << "Quantidade de números maiores que " << busca << ": " << maiores << endl;
   return 0;
}