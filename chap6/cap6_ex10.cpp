/*
Faça uma função que receba um vetor de 5 elementos contendo o gabarito da loteria e um segundo vetor de 10 elementos contendo a aposta. A função deve retornar quantos pontos fez o apostador.
*/

#include <iostream>
using namespace std;

int pontosLoteria(int gabarito[], int aposta[])
{
   int pontos = 0;
   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 10; j++)
      {
         if (gabarito[i] == aposta[j])
         {
            pontos++;
            break;
         }
      }
   }
   return pontos;
}

int main()
{
   int gabarito[] = {3, 5, 9, 13, 20};
   int aposta[] = {2, 5, 9, 11, 15, 16, 18, 19, 20, 21};
   int pontos = pontosLoteria(gabarito, aposta);
   cout << "Pontos na loteria: " << pontos << endl;
   return 0;
}
