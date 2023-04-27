/*
8. Faça um algoritmo que imprima o extrato de uma conta salário que permite até 3 retiradas por mês. Leia o valor do saldo inicial, o valor do salário e o valor de cada retirada, imprimindo saldos parciais e final. Nota: não se preocupe se o saldo ficar negativo neste algoritmo.
*/

#include <iostream>
using namespace std;

int main()
{
   float saldo, salario, retirada;

   cout << "Digite o valor do saldo inicial: R$ ";
   cin >> saldo;

   cout << "Digite o valor do salario: R$ ";
   cin >> salario;

   // Atualiza saldo com o salário
   saldo = saldo + salario;

   cout << "Digite o valor da primeira retirada: R$ ";
   cin >> retirada;
   saldo = saldo - retirada;
   cout << "Saldo parcial: " << saldo << endl;

   cout << "Digite o valor da segunda retirada: R$ ";
   cin >> retirada;
   saldo = saldo - retirada;
   cout << "Saldo parcial: " << saldo << endl;

   cout << "Digite o valor da última retirada: R$ ";
   cin >> retirada;
   saldo = saldo - retirada;
   cout << "Saldo final: " << saldo << endl;

   return 0;
}