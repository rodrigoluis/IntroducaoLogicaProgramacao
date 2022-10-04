/*
Make an algorithm to register the vehicles of a company. The company has 10 cars. 
Each register contains the driver's name (100 characters), vehicle plate (10 
characters), vehicle color (20 characters) and operating shift (1 character). 
The value of the shift variable can assume the values: m (morning), a (afternoon), 
n (night) or d (all day). After the registration of all cars, print the information 
of the cars in each shift. Use functions to perform the requested operations.
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
    cout << "\nInform car %d info.\n", i);
    cout << " Driver's name: ");
    fgets(list[i].name, sizeof(list[i].name), stdin);
    cout << " Car plate: ");
    fgets(list[i].plate, sizeof(list[i].plate), stdin);
    cout << " Color: ");
    fgets(list[i].color, sizeof(list[i].color), stdin);
    cout << " Shift: ");
    cin >> %c%*c", &list[i].shift);       
  }
}

void printCarsByShift(car list[])
{
  char shifts[4] = {'m','a','n','d'};

  cout << "-- Cars by shift -- \n\n");
  for(int s = 0; s < 4; s++)
  {
    cout << "Shift: %c\n", shifts[s]);
    for(int i = 0; i < N; i++)
    {
      if(list[i].shift == shifts[s])
      {
        cout << " * Driver Name: %s", list[i].name);
        cout << " * Plate: %s", list[i].plate);
        cout << " * Color: %s\n", list[i].color);
      }
    }
    cout << "\n");
  }
}

int main()
{
    car carList[N];
    readCarInfo(carList);
    printCarsByShift(carList);
    
    return 0;
}
