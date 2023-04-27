/*
9. Escreva uma função para receber as três notas de um aluno e outras duas variáveis reais. A função deve calcular a média aritmética simples e a média ponderada (pesos) 2, 3, 5. Ambas as médias devem ser armazenadas nas duas últimas variáveis passadas por referência e impressas na função principal.
*/

#include <iostream>
using namespace std;

void calcularMedias(float n1, float n2, float n3, float &mediaAritmetica, float &mediaPonderada)
{
   mediaAritmetica = (n1 + n2 + n3) / 3.0f;
   mediaPonderada = (2.0f * n1 + 3.0f * n2 + 5.0f * n3) / 10.0f;
}

int main()
{
   float nota1, nota2, nota3, mediaAritmetica, mediaPonderada;

   cout << "Digite a primeira nota: ";
   cin >> nota1;

   cout << "Digite a segunda nota: ";
   cin >> nota2;

   cout << "Digite a terceira nota: ";
   cin >> nota3;

   calcularMedias(nota1, nota2, nota3, mediaAritmetica, mediaPonderada);

   cout << "Média aritmética: " << mediaAritmetica << endl;
   cout << "Média ponderada: " << mediaPonderada << endl;

   return 0;
}
