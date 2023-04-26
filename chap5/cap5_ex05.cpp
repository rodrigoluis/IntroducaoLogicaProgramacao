/*
5. Dada uma dívida de R$ 10.000,00 que cresce a juros de 2,5% ao mês e uma aplicação de R$ 1.500,00 com rendimento de 4% ao mês, escreva uma função para determinar o número de meses necessários para pagar a dívida utilizando esta aplicação.
*/

#include <iostream>
using namespace std;

int monthsNeeded(float debt, float debtRate, 
                 float invest, float yield)
{
    int months = 0;
    while(invest < debt )
    {
        debt = debt + (debt * debtRate)/100.0;
        invest = invest + (invest * yield)/100.0;
        months++;
    }
    return months;
}

int main()
{
    // Test function
    int months = monthsNeeded(10000, 2.5, 1500, 4);
    cout << "Meses: " << months << endl;
    return 0;
}
