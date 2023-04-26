/*
9. Faça um algoritmo para gerenciar o estoque de uma empresa. Cada produto terá um identificador (inteiro), nome (150 caracteres), quantidade em estoque (inteiro) e preço unitário (real). Crie um vetor com 1000 produtos e inicialize o identificador de cada produto com o valor 0. Crie um menu que permita inserir um novo produto (verificar o primeiro identificador com valor zero), remover um produto através de seu identificador, imprimir todos os produtos que foram cadastrados, imprimir qual produto está com maior estoque e imprimir as informações do produto com maior valor na empresa (multiplique o valor unitário pelo estoque para descobrir o produto mais valioso). O identificador de um produto adicionado é único e será seu índice + 1.
*/

#include <iostream>
using namespace std;
#define N 1000

struct product
{
  int id;
  char name[150];
  int stock;
  float price;
};

void initProductList(product list[])
{
  for(int i = 0; i < N; i++)
  {
    list[i].id = 0;
  }
}

void insertProduct(product list[])
{
  for(int i = 0; i < N; i++)
  {
    if(list[i].id == 0)
    {
      cout << "\nInform product info.\n";
      list[i].id = i+1;
      cout << " Name: ";
      cin.getline(list[i].name, sizeof(list[i].name));
      cout << " Stock: ";
      cin >> list[i].stock;   
      cout << " Price: ";
      cin >> list[i].price;
      cin.ignore();   
      break; // Insert only one product each time
    }
  }
}

void removeProduct(product list[])
{
  int id;
  cout << "Inform product's id: ";
  cin >> id;
  for(int i = 0; i < N; i++)
  {
    if(list[i].id == id)
    {
      cout << "Product removed: " << list[i].name;
      list[i].id = 0;
      return;
    }
  }
  cout << "No product with id " << id << " was found.\n";
}

void printAllProducts(product list[])
{
  cout << "\n\n-- Product List --";  
  for(int i = 0; i < N; i++)
  {
    if(list[i].id != 0)
    {
      cout << "\n\nProduct ID " << list[i].id;
      cout << "\n Name:  " << list[i].name;
      cout << "\n Stock: " << list[i].stock;
      cout << "\n Price: " << list[i].price;            
    }
  }  
  cout << "\n\n";
}

void printLargestInventory(product list[])
{
  cout << "\n\n-- Product List --\n";  
  float inventory = 0;
  int id = 0;
  for(int i = 0; i < N; i++)
  {
    if(list[i].id != 0)
    {
      if(list[i].stock > inventory)
      {
        inventory = list[i].stock;
        id = i;
      }
    }
  }  
  cout << "\nLargest Inventory: " << list[id].name;
  cout << "\nInventory:  " <<  list[id].stock;  
  cout << "\n\n";
}

void printMostValuableProduct(product list[])
{
  cout << "\n\n-- Product List --\n";  
  float value = 0;
  int id = 0;
  for(int i = 0; i < N; i++)
  {
    if(list[i].id != 0)
    {
      float productValue = list[i].price * list[i].stock;
      if(productValue > value)
      {
        value = productValue;
        id = i;
      }
    }
  }  
  cout << "\nMost valuable product: " << list[id].name;
  cout << "\nValue: R$ " << list[id].price * list[id].stock;  
  cout << "\n\n";
}

int main()
{
    product list[N];
    initProductList(list);
    int op=1;

    // Menu
    while(op)
    {
      cout << "\n\n-- Menu --\n";
      cout << "1. Insert product.\n";      
      cout << "2. Remove product.\n";      
      cout << "3. Print all products.\n";      
      cout << "4. Print product with largest inventory.\n";                        
      cout << "5. Print product with highest value.\n";                                    
      cout << "0. Exit\n Option: ";
      cin >> op;
      cin.ignore();
      switch(op)
      {
        case 1:
          insertProduct(list);
          break;
        case 2:
          removeProduct(list);
          break;
        case 3:
          printAllProducts(list);
          break;
        case 4:
          printLargestInventory(list);
          break;              
        case 5:
          printMostValuableProduct(list);
          break;
      }
    }
    return 0;
}
