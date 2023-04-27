/*
10. Faça um programa que leia do teclado um intervalo de tempo em segundos e imprima na tela sua conversão em horas, minutos e segundos.
*/

#include <iostream>
using namespace std;

int main()
{
   int intervaloSegundos, horas, minutos, segundos;

   cout << "Digite o intervalo de tempo em segundos: ";
   cin >> intervaloSegundos;

   horas = intervaloSegundos / 3600;
   intervaloSegundos %= 3600;

   minutos = intervaloSegundos / 60;
   intervaloSegundos %= 60;

   segundos = intervaloSegundos;

   cout << "Saída: " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos." << endl;

   return 0;
}