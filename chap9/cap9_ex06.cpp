/*
6. Faça um algoritmo para cadastrar os veículos de uma empresa.  A empresa possui 10 veículos. Cada registro deve conter o nome do condutor (100 caracteres), placa do veículo (10 caracteres), cor do veículo (20 caracteres) e turno de operação (1 caractere). O valor da variável turno poderá assumir os valores: m (manhã), t (tarde), n (noite) ou i (dia inteiro).  Após o registro de todos os veículos, informe quais veículos foram cadastrados no sistema em cada um dos turnos. Utilize funções para fazer as operações pedidas.
*/

#include <iostream>
using namespace std;
#define N 10

struct car
{
    char name[100];
    char plate[9];    
    char color[20];
    char shift;
};

void readCarInfo(car list[])
{
  for(int i = 0; i < N; i++)
  {
    cout << "\nInform car " << i << " info.\n";
    cout << " Driver's name: ";
    cin.getline(list[i].name, sizeof(list[i].name));
    cout << " Car plate: ";
    cin.getline(list[i].plate, sizeof(list[i].plate));
    cout << " Color: ";
    fgets(list[i].color, sizeof(list[i].color), stdin);
    cout << " Shift: ";
    cin >> list[i].shift;       
    cin.ignore();
  }
}

void printCarsByShift(car list[])
{
  char shifts[4] = {'m','a','n','d'};

  cout << "\n\n-- Cars by shift -- \n\n";
  for(int s = 0; s < 4; s++)
  {
    cout << "Shift: " << shifts[s];
    for(int i = 0; i < N; i++)
    {
      if(list[i].shift == shifts[s])
      {
        cout << "\n * Driver Name: " << list[i].name;
        cout << "\n * Plate: " << list[i].plate;
        cout << "\n * Color: " << list[i].color;
      }
    }
    cout << endl;    
  }

}

int main()
{
    car carList[N];
    readCarInfo(carList);
    printCarsByShift(carList);
    
    return 0;
}
