/*
3. Faça uma função que receba como parâmetro um número inteiro e informe se ele é divisível por 2.
*/

#include <iostream>
using namespace std;

void isDividedBy2(int num)
{
    if(num%2 == 0)
    {
        cout << "É divisível por 2.\n";
    }
    else
    {
        cout << "Não é divisível por 2.\n";
    }
}

int main()
{
    // Testing function
    int v1;
    cout << "Informe um inteiro: ";
    cin >> v1;
    isDividedBy2(v1);
    return 0;
}
