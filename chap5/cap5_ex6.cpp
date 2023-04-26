/*
6. A conversão de graus Fahrenheit para Celsius é obtida pela fórmula C = (F-32)/1.8. Desenvolva um algoritmo para calcular e imprimir uma tabela de graus Celsius em função de graus Fahrenheit que variem de 50 a 150 de 1 em 1.
*/

#include <iostream>
#include <iomanip>
using namespace std;

void printTemperatureTable()
{
    cout << fixed; 
    cout << setprecision(2); 
      
    float c;
    for(int f = 50; f <= 150; f++)
    {
        c = (f-32) / 1.8;
        cout << "F° = " << f << " / C° = " << c << endl;
    }
}

int main()
{
    // Test function
    printTemperatureTable();
    return 0;
}
