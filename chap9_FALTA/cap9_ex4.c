/*
Make an algorithm to store the information of 11 players on a football team. Each 
player has a name (100 characters), shirt number (integer), weight (float) and 
height (float). Read the information of each player and print at the end this 
information, the initial of the lightest player and the number of the heaviest 
player. The requested operations must be implemented in functions.
*/

#include <iostream>
using namespace std;
#define N 11

typedef struct 
{
    char name[100];
    int shirt;
    float weight;
    float height;
} player;

void readPlayersInfo(player s[])
{
  for(int i = 0; i < N; i++)
  {
    cout << "Inform player %d info.\n", i);
    cout << " Name: ");
    fgets(s[i].name, sizeof(s[i].name), stdin);
    cout << " Shirt Number: ");
    cin >> %d", &s[i].shirt);
    cout << " Weight: ");
    cin >> %f", &s[i].weight);
    cout << " Height: ");
    cin >> %f%*c", &s[i].height);       
  }
}

void printPlayerInfo(player s[])
{
  cout << "-- Information of the players -- \n\n");
  for(int i = 0; i < N; i++)
  {
    cout << " Player %d\n", i);
    cout << " >> Name:   %s", s[i].name);
    cout << " >> Shirt:  %d\n", s[i].shirt);
    cout << " >> Weight: %.2f\n", s[i].weight);
    cout << " >> Height: %.2f\n", s[i].height);   
    cout << "\n");
  }
}

void printInitialLightest(player s[])
{
  float weight = s[0].weight;
  int idLightest = 0;
  for(int i = 1; i < N; i++)
  {
    if(s[i].weight < weight)
    {
      weight = s[i].weight;
      idLightest = i;
    }
  }
  cout << "\nInitial of the lightest: %c\n", s[idLightest].name[0]);
}

void printNumberHeaviest(player s[])
{
  float weight = s[0].weight;
  int idHeaviest = 0;
  for(int i = 1; i < N; i++)
  {
    if(s[i].weight > weight)
    {
      weight = s[i].weight;
      idHeaviest = i;
    }
  }
  cout << "\nShirt of the heaviest: %d\n", s[idHeaviest].shirt);
}


int main()
{
    player playerList[N];
    readPlayersInfo(playerList);
    printPlayerInfo(playerList);
    printInitialLightest(playerList);
    printNumberHeaviest(playerList);
    
    return 0;
}
