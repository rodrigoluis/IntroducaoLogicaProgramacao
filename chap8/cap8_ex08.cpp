/*
Faça uma função que receba uma matriz A[5][5] que retorne a soma dos elementos abaixo da diagonal principal.
*/

#include <iostream>
using namespace std;

int somaAbaixoDiagonal(int A[5][5])
{
   int soma = 0;
   for (int i = 1; i < 5; i++)
   {
      for (int j = 0; j < i; j++)
      {
         soma += A[i][j];
      }
   }

   return soma;
}

int main()
{
   int A[5][5] = {{1,  2,  3,  4,   5},
                  {6,  7,  8,  9,  10},
                  {11, 12, 13, 14, 15},
                  {16, 17, 18, 19, 20},
                  {21, 22, 23, 24, 25}};
   int soma = somaAbaixoDiagonal(A); // Valor esperado é 170

   cout << "A soma dos elementos abaixo da diagonal principal de A é " << soma << endl;

   return 0;
}