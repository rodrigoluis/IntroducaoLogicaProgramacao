/*
Make an algorithm to manage a company's inventory. Each product will have 
an identifier (integer), name (150 characters), quantity in stock (integer) 
and unit price (float). Create an array with 1000 products and initialize 
the identifier of each product with the value 0. Create a menu that allows 
you to insert a new product (check the first identifier with value zero), 
remove a product using its identifier, print all products registered, 
print which product has the largest  inventory and print which product 
has the highest value (multiply the unit value by the stock to discover 
the most valuable product). The identifier of an added product is unique 
and will be its array index + 1.
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
      cout << "\nInform product info.\n");
      list[i].id = i+1;
      cout << " Name: ");
      fgets(list[i].name, sizeof(list[i].name), stdin);
      cout << " Stock: ");
      cin >> %d", &list[i].stock);   
      cout << " Price: ");
      cin >> %f%*c", &list[i].price); 
      break;        
    }
  }
}

void removeProduct(product list[])
{
  int id;
  cout << "Inform product's id: ");
  cin >> %d%*c", &id);
  for(int i = 0; i < N; i++)
  {
    if(list[i].id == id)
    {
      cout << "Product removed: %s.", list[i].name);
      list[i].id = 0;
      return;
    }
  }
  cout << "No product with id %d was found.\n", id);
}

void printAllProducts(product list[])
{
  cout << "\n\n-- Product List --\n");  
  for(int i = 0; i < N; i++)
  {
    if(list[i].id != 0)
    {
      cout << "\nProduct ID %d\n", list[i].id);
      cout << " Name:  %s", list[i].name);
      cout << " Stock: %d -", list[i].stock);
      cout << " Price: %.2f\n", list[i].price);            
    }
  }  
  cout << "\n\n");
}

void printLargestInventory(product list[])
{
  cout << "\n\n-- Product List --\n");  
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
  cout << "\nLargest Inventory: %s", list[id].name);
  cout << "Inventory: %d.\n", list[id].stock);  
  cout << "\n\n");
}

void printMostValuableProduct(product list[])
{
  cout << "\n\n-- Product List --\n");  
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
  cout << "\nMost valuable product: %s", list[id].name);
  cout << "Value: R$ %.2f.\n", list[id].price * list[id].stock);  
  cout << "\n\n");
}



int main()
{
    product list[N];
    initProductList(list);
    int op=1;

    // Menu
    while(op)
    {
      cout << "\n\n-- Menu --\n");
      cout << "1. Insert product.\n");      
      cout << "2. Remove product.\n");      
      cout << "3. Print all products.\n");      
      cout << "4. Print product with largest inventory.\n");                        
      cout << "5. Print product with highest value.\n");                                    
      cout << "0. Exit\n Option: ");
      cin >> %d%*c", &op);
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
