/*
2. Crie uma estrutura chamada ponto contendo as coordenadas x e y (real) de um ponto. Na função principal declare 2 pontos, leia as coordenadas x e y de cada ponto e calcule a distância entre eles em uma função. Apresentar no final a distância euclidiana entre estes dois pontos na função principal.
*/

#include <iostream>
#include <cmath>
using namespace std;

struct point
{
    float x, y;
};

float euclideanDistance(point p1, point p2)
{
    float distance;
    distance = sqrt( pow(p1.x-p2.x,2) + pow(p1.y-p2.y,2) );
    return distance;
}

int main()
{
    point p1, p2;  
    cout << "Inform the coordinates (x, y) of point p1: ";
    cin >> p1.x >> p1.y;
    cout << "Inform the coordinates (x, y) of point p2: ";
    cin >> p2.x >> p2.y;

    float distance = euclideanDistance(p1, p2);

    cout << "Euclidean distance between p1 and p2 is " << distance << endl;   
    return 0;
}