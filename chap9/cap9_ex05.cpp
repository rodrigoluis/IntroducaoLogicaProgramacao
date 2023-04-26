/*
5. Faça um algoritmo para armazenar as informações de 11 jogadores de um time de futebol. Cada jogador possui nome (100 caracteres), número da camisa (inteiro), peso (real) e altura (real). Leia as informações de cada jogador e imprima ao final estas informações, a inicial do jogador mais baixo e o número do jogador mais pesado. As operações solicitadas serão implementadas em funções.
*/

#include <iostream>
using namespace std;
#define N 11

struct player
{
    char name[100];
    int shirt;
    float weight;
    float height;
};

void readPlayersInfo(player s[])
{
  for(int i = 0; i < N; i++)
  {
    cout << "Inform player " << i << " info:" << endl;
    cout << " Name: ";
    cin.getline(s[i].name, sizeof(s[i].name));
    cout << " Shirt Number: ";
    cin >> s[i].shirt;
    cout << " Weight: ";
    cin >> s[i].weight;
    cout << " Height: ";
    cin >> s[i].height;
    cin.ignore();       
  }
}

void printPlayerInfo(player s[])
{
  cout << "-- Player's Information -- \n\n";
  for(int i = 0; i < N; i++)
  {
    cout << " Player " << i << endl;
    cout << " >> Name:   " << s[i].name << endl;
    cout << " >> Shirt:  " << s[i].shirt << endl;
    cout << " >> Weight: " << s[i].weight << endl;
    cout << " >> Height: " << s[i].height << endl;
    cout << endl;
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
  cout << "\nInitial of the lightest: " << s[idLightest].name[0] << endl;
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
  cout << "\nShirt of the heaviest: " << s[idHeaviest].shirt << endl;
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
