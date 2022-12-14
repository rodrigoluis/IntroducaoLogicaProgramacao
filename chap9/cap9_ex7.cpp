/*
Make an algorithm to register people. Each person will contain an 
ID (12 characters), name (100 characters), age (integer), and 
telephone (10 characters). Your system will store a maximum of 
100 people and allow you to read the information of a person 
(include the person in the first vacant position of the vector), 
print by age (inform the minimum and maximum ages and print people 
who are in this range), print by initial (consider that all initials are 
registered in upper-case)  and print all registered records. Create a menu 
to access the functions that will perform the requested operations. 
Initialize the ID of all 100 records at the beginning of the program 
with the text "empty". Use this information to define whether or not 
a record was read at that specific position in the vector.
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
