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
    strcpy(list[i].id, "empty");
  }
}

void insertPerson(person list[])
{
  for(int i = 0; i < N; i++)
  {
    if( strcmp(list[i].id, "empty") == 0 )
    {
      cout << "\nPerson " << i+1 << " info.\n";
      cout << " ID: ";      
      cin.getline(list[i].id, sizeof(list[i].id));
      cout << " Name: ";
      cin.getline(list[i].name, sizeof(list[i].name));
      cout << " Age: ";
      cin >> list[i].age;   
      cin.ignore();
      cout << " Phone number: ";
      cin.getline(list[i].phone, sizeof(list[i].phone));
      break;        
    }
  }
}
void printByAge(person list[])
{
  int ageMin, ageMax;
  cout << "Inform min and max age: ";
  cin >> ageMin >> ageMax;
  cout << "\n\n-- People between " << ageMin << " and " << ageMax << " years --\n";  
  for(int i = 0; i < N; i++)
  {
    if(strcmp(list[i].id, "empty") &&
       list[i].age >= ageMin &&
       list[i].age <= ageMax)
    {
      cout << "\nPerson ID" << list[i].id;
      cout << " Name: " << list[i].name;
      cout << " Age: " << list[i].age;
      cout << " Phone: " << list[i].phone;            
    }
  }  
  cout << "\n\n";  
}

void printByInitial(person list[])
{
  char initial;
  cout << "Inform initial letter of the name: ";
  cin >> initial;
  cout << "\n\n-- People with initial letter " << initial << " --\n";  
  for(int i = 0; i < N; i++)
  {
    if(strcmp(list[i].id, "empty") &&
       list[i].name[0] == initial)
    {
      cout << "\nPerson ID " << list[i].id;
      cout << " Name:  " << list[i].name;
      cout << " Age: " << list[i].age;
      cout << " Phone: " << list[i].phone;            
    }
  }  
  cout << "\n\n";  
}

void printAll(person list[])
{
  cout << "\n\n-- People registered --\n";  
  for(int i = 0; i < N; i++)
  {
    if(strcmp(list[i].id, "empty"))
    {
      cout << "\nPerson ID" << list[i].id;
      cout << " Name:  " << list[i].name;
      cout << " Age: " << list[i].age;
      cout << " Phone: " << list[i].phone;            
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
      cout << "1. Insert person.\n";      
      cout << "2. Print by age.\n";      
      cout << "3. Print by initial.\n";      
      cout << "4. Print all.\n";                        
      cout << "0. Exit\n Option: ";
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
