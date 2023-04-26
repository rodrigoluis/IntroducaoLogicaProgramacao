/*
Escreva uma função para receber a idade de uma pessoa em anos, meses e dias e retornar essa idade expressa em dias. Considere que cada ano possui 365 dias e cada mês possui 30 dias. Imprima o resultado na função principal.
*/

#include <iostream>
using namespace std;

int computeAge(int year, int months, int days)
{
    int ageInDays = 0;
    ageInDays = 365 * year + 30 * months + days;
    return ageInDays;
}

int main()
{
    // Testing the function
    int output;
    output = computeAge(23, 7, 15);
    cout << "Number of computed days: " << output << endl;
    return 0;
}
