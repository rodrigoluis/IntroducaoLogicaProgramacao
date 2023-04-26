/*
4. Faça uma função para receber dois números reais e verificar se ambos são maiores que zero. Caso positivo, informar "Valores são válidos". Caso contrário, informar "Valores inválidos".
*/

#include <iostream>
using namespace std;

void checkValues(float v1, float v2)
{
    if(v1>0 && v2>0)
    {
        cout << "Valores são válidos.\n";
    }
    else
    {
        cout << "Valores são inválidos.\n";
    }
}

int main()
{
    // Testing function
    float v1, v2;
    cout << "Informe dois valores reais: ";
    cin >> v1 >> v2;
    checkValues(v1, v2);
    return 0;
}
