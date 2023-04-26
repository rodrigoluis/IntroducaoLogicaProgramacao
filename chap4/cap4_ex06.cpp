/*
6. Faça uma função que recebe o número do dia da semana e imprima o seu respectivo nome por extenso. Considerar o número 1 como domingo, 2 para segunda etc. Caso o dia não exista (menor que 1 ou maior que 7), exibir a mensagem "Dia da semana inválido".
*/

#include <iostream>
using namespace std;

void printName(int day)
{
    switch(day)
    {
        case 1:
            cout << "Domingo.\n";
            break;
        case 2:
            cout << "Segunda.\n";
            break;
        case 3:
            cout << "Terça.\n";
            break;
        case 4:
            cout << "Quarta.\n";
            break;
        case 5:
            cout << "Quinta.\n";
            break;
        case 6:
            cout << "Sexta.\n";
            break;
        case 7:
            cout << "Sábado.\n";
            break;
        default:            
            cout << "Dia da semana inválido.\n";
    }
}

int main()
{
    // Testing function
    int day;
    cout << "Informe o número do dia da semana: ";
    cin >> day;
    printName(day);
    return 0;
}
