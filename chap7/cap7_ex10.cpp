/*
10. Faça uma função que receba uma string contendo um nome completo de no máximo 100 caracteres. A função deve modificar essa string abreviando o nome seguindo o padrão do exemplo abaixo:
   Primeira string:  João Pereira Augusto Souza
   Segunda string: João P. A. Souza
*/


#include <iostream>
#include <cstring>
using namespace std;

void abreviaNome(char nome[])
{
   char nomeAux[100];
   int i, j, indiceEspaco;
   int tam = strlen(nome);

   // Descobre a posição espaço antes do último sobrenome
   for (i = 0; i < tam; i++)
      if(nome[i] == ' ' && nome[i+1] != ' ' )
         indiceEspaco = i;

   // Copia primeiro nome
   for (i = 0; nome[i]!= ' '; i++)
      nomeAux[i] = nome[i];
   nomeAux[i] = ' ';

   // Cria abreviações
   j = i+1;   
   for (; i < indiceEspaco; i++)
   {
      if(nome[i] == ' ' && nome[i+1] != ' ' )
      {
         nomeAux[j++] = nome[i+1];
         nomeAux[j++] = '.';         
         nomeAux[j++] = ' ';                  
      }
   }

   // Copia ultimo nome 
   for (; nome[i]!='\0'; i++, j++)
      nomeAux[j] = nome[i+1];
   nomeAux[j]='\0';

   // Sobrescreve a string original
   strcpy(nome, nomeAux);
}

int main()
{
   char nome[100] = "João Pereira Augusto Souza";
   cout << "Entrada: " << nome << endl;

   abreviaNome(nome);

   cout << "Saída:   " << nome << endl;   

   return 0;
}