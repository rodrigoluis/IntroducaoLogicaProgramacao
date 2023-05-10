/*
Faça uma função que receba um vetor, seu tamanho e duas variáveis passadas por referência, todos inteiros. A função deve armazenar nas variáveis passadas por referência o menor e o maior valor contido no vetor.
*/

#include <iostream>

using namespace std;

void menorMaior(int vetor[], int tamanho, int &menor, int &maior)
{
   menor = vetor[0];
   maior = vetor[0];
   for (int i = 1; i < tamanho; i++)
   {
      if (vetor[i] < menor)
      {
         menor = vetor[i];
      }
      if (vetor[i] > maior)
      {
         maior = vetor[i];
      }
   }
}

int main()
{
   int vetor[] = {4, 2, 7, 1, 9, 5, 3};
   int menor, maior;
   menorMaior(vetor, 7, menor, maior);
   cout << "Menor valor: " << menor << endl;
   cout << "Maior valor: " << maior << endl;
   return 0;
}
