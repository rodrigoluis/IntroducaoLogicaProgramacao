/*
10. Altere o exercício 5 e crie uma função que receba três valores reais, sendo o primeiro a altura de uma pessoa. Os outros dois valores, passados por referência, serão utilizados para armazenar o peso ideal de ambos os sexos. Os pesos ideais só devem ser calculados se a altura passada como parâmetro for maior que zero, e neste caso, a função deve retornar um valor positivo. Caso contrário, a função deve retornar zero. Esses valores devem ser utilizados na função principal para imprimir o peso de ambos os sexos ou uma mensagem de erro.
*/

#include <iostream>
using namespace std;

float calculaPesoIdeal(float altura, float &ph, float &pm)
{
   if (altura > 0)
   {
      ph = 72.7 * altura - 58.0;
      pm = 62.1 * altura - 44.7;
      return 1;
   }
   else
   {
      return 0;
   }
}

int main()
{
   float altura, pesoIdealHomem, pesoIdealMulher;
   cout << "Digite a altura em metros: ";
   cin >> altura;

   if (calculaPesoIdeal(altura, pesoIdealHomem, pesoIdealMulher))
   {
      cout << "Pesos ideais: " << endl;
      cout << " - Homem:  " << pesoIdealHomem << "kg." << endl;
      cout << " - Mulher: " << pesoIdealMulher << "kg." << endl;
   }
   else
   {
      cout << "Altura inválida!" << endl;
   }

   return 0;
}
