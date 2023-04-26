/*
10. Faça um algoritmo para cadastrar pessoas. Cada pessoa conterá um CPF (12 caracteres), nome (100 caracteres), idade (inteiro) e telefone (20 caracteres). Seu sistema armazenará no máximo 100 pessoas e permitirá ler as informações de uma pessoa (incluir a pessoa na primeira posição vaga do vetor), imprimir por idade (informar as idades mínima e máxima e imprimir as pessoas que estão neste intervalo), imprimir por inicial (pedir aqui somente a inicial do nome) e imprimir todos os registros cadastrados. Crie um menu para ter acesso às funções que realizarão as operações pedidas. Inicialize o CPF de todos os 100 registros no início do programa com o texto "vazio". Utilize essa informação para definir se um registro foi ou não lido naquela posição específica do vetor. 
*/

#include <iostream>
#include <cstring>
using namespace std;

#define N 100

struct person
{
  char id[12];
  char name[100];
  char phone[15];
  int age;
};

void initPeople(person list[])
{
  for(int i = 0; i < N; i++)
  {
    strcpy(list[i].id, "vazio");
  }
}

void insertPerson(person list[])
{
  for(int i = 0; i < N; i++)
  {
    if( strcmp(list[i].id, "vazio") == 0 )
    {
      cout << "\nInformações da pessoa " << i+1 << ".\n";
      cout << " ID: ";      
      cin.getline(list[i].id, sizeof(list[i].id));
      cout << " Nome: ";
      cin.getline(list[i].name, sizeof(list[i].name));
      cout << " Idade: ";
      cin >> list[i].age;   
      cin.ignore();
      cout << " Telefone: ";
      cin.getline(list[i].phone, sizeof(list[i].phone));
      break;        
    }
  }
}
void printByAge(person list[])
{
  int ageMin, ageMax;
  cout << "Informe idade mínima e máxima: ";
  cin >> ageMin >> ageMax;
  cout << "\n\n-- Pessoas entre " << ageMin << " e " << ageMax << " anos --\n";  
  for(int i = 0; i < N; i++)
  {
    if(strcmp(list[i].id, "vazio") &&
       list[i].age >= ageMin &&
       list[i].age <= ageMax)
    {
      cout << "\nID da pessoa" << list[i].id;
      cout << " Nome:     " << list[i].name;
      cout << " Idade:    " << list[i].age;
      cout << " Telefone: " << list[i].phone;            
    }
  }  
  cout << "\n\n";  
}

void printByInitial(person list[])
{
  char initial;
  cout << "Informe letra inicial do nome: ";
  cin >> initial;
  cout << "\n\n-- Pessoas com letra inicial " << initial << " --\n";  
  for(int i = 0; i < N; i++)
  {
    if(strcmp(list[i].id, "vazio") &&
       list[i].name[0] == initial)
    {
      cout << "\nID da pessoa" << list[i].id;
      cout << " Nome:     " << list[i].name;
      cout << " Idade:    " << list[i].age;
      cout << " Telefone: " << list[i].phone;             
    }
  }  
  cout << "\n\n";  
}

void printAll(person list[])
{
  cout << "\n\n-- Pessoas registradas --\n";  
  for(int i = 0; i < N; i++)
  {
    if(strcmp(list[i].id, "vazio"))
    {
      cout << "\nID da pessoa" << list[i].id;
      cout << " Nome:     " << list[i].name;
      cout << " Idade:    " << list[i].age;
      cout << " Telefone: " << list[i].phone;           
    }
  }  
  cout << "\n\n";
}


int main()
{
    person people[N];
    initPeople(people);
    int op=1;

    // Menu
    while(op)
    {
      cout << "\n\n-- Menu --\n";
      cout << "1. Insere pessoa.\n";      
      cout << "2. Imprime por idade.\n";      
      cout << "3. Imprime por inicial.\n";      
      cout << "4. Imprime tudo.\n";                        
      cout << "0. Sair\n Opção: ";
      cin >> op;
      cin.ignore();
      switch(op)
      {
        case 1:
          insertPerson(people);
          break;
        case 2:
          printByAge(people);
          break;
        case 3:
          printByInitial(people);
          break;
        case 4:
          printAll(people);
          break;              
      }
    }
    return 0;
}
