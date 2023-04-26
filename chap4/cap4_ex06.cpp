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
            cout << "Sunday.\n";
            break;
        case 2:
            cout << "Monday.\n";
            break;
        case 3:
            cout << "Tuesday.\n";
            break;
        case 4:
            cout << "Wednesday.\n";
            break;
        case 5:
            cout << "Thursday.\n";
            break;
        case 6:
            cout << "Friday.\n";
            break;
        case 7:
            cout << "Saturday.\n";
            break;
        default:            
            cout << "Invalid day of the week.\n";
    }
}

int main()
{
    // Testing function
    int day;
    cout << "Inform the number of the day: ";
    cin >> day;
    printName(day);
    return 0;
}
