/*
Escreva uma função para receber as três notas de um aluno e imprimir a média ponderada. Considere como peso das notas os seguintes valores: 2, 3, 5.
*/

#include <iostream>
using namespace std;

float weightedAverage(float n1, float n2, float n3)
{
    float average;
    average = (n1 * 2 + n2 * 3 + n3 * 5)/10.0;
    return average;
}

int main()
{
    float g1, g2, g3, average;
    cout << "Informe as 3 notas do estudante: ";
    cin >> g1 >> g2 >> g3;
    average = weightedAverage(g1, g2, g3);
    cout << "Média ponderada: " << average << endl;
    return 0;
}
