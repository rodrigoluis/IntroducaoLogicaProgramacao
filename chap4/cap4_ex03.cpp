/*
3. Faça uma função que receba como parâmetro um número inteiro e informe se ele é divisível por 2.
*/

#include <iostream>
using namespace std;

void isDividedBy2(int num)
{
    if(num%2 == 0)
    {
        cout << "It is divisible by two.\n";
    }
    else
    {
        cout << "It is not divisible by two.\n";
    }
}

int main()
{
    // Testing function
    int v1;
    cout << "Inform an integer: ";
    cin >> v1;
    isDividedBy2(v1);
    return 0;
}
