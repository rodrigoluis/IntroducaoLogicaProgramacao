/*
3. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,40 metro e cresce 3 centímetros por ano. Construa um algoritmo para calcular e imprimir quantos anos serão necessários para que Zé seja maior que Chico.
*/

#include <iostream>
using namespace std;

int yearsNeeded(float john, float johnGrowth, 
                float paul, float paulGrowth)
{
    int years = 0;
    while(john >= paul)
    {
        john = john + johnGrowth;
        paul = paul + paulGrowth;
        years++;
    }
    return years;
}

int main()
{
    // Test function
    int years = yearsNeeded(150, 2.0, 140, 3.0);
    cout << "Years: " << years << endl;
    return 0;
}
