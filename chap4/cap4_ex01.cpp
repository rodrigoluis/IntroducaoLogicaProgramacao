/*
1. Faça uma função para ler dois números inteiros e informar se o primeiro é maior, menor ou igual ao segundo.
*/

#include <iostream>
using namespace std;

void printGreater(int v1, int v2)
{
    if(v1 > v2)
    {
        cout << "First is greater.\n";
    }
    else
    {
        if(v1 < v2)
        {
            cout << "Second is greater.\n";
        }
        else
        {
            cout << "Number are equal.\n";
        }
    }
}

int main()
{
    // Testing function
    int v1, v2;
    cout << "Inform two integers: ";
    cin >> v1 >> v2;
    printGreater(v1, v2);
    return 0;
}
