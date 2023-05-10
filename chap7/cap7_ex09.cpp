/*
Faça uma função que receba duas strings de mesmo tamanho. A função deve "criptografar" os dados da primeira e armazenar o resultado na segunda. A criptografia, baseada na tabela ASCII, consiste em substituir um determinado caractere por outro, duas posições à frente na referida tabela. Imprima a string resultante na função principal. A seguir, crie uma segunda função, com os mesmos parâmetros, que desfaça a criptografia seguindo o mesmo critério. Imprima novamente a string resultante na função principal.
*/

#include <iostream>
#include <cstring>
using namespace std;

void criptografar(char s1[], char s2[])
{
   int tam = strlen(s1);
   for (int i = 0; i < tam; i++)
   {
      s2[i] = (s1[i] + 2);
   }
   s2[tam] = '\0';
}

void descriptografar(char s1[], char s2[])
{
   int tam = strlen(s1);
   for (int i = 0; i < tam; i++)
   {
      s2[i] = (s1[i] - 2);
   }
   s2[tam] = '\0';
}

int main()
{
   char s1[100], s2[100], s3[100];
   printf("Digite uma string de ate 100 caracteres: ");
   cin.getline(s1, 100);

   criptografar(s1, s2);
   cout << "String criptografada: " << s2 << endl;

   descriptografar(s2, s3);
   cout << "String descriptografada: " << s3 << endl;

   return 0;
}