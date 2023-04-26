/*
2. Faça um algoritmo para ler dois números inteiros e fazer a divisão do primeiro pelo segundo (somente se o segundo for diferente de zero). Imprima o resultado da operação ou uma mensagem indicando que a operação não foi realizada pois o segundo número era zero.
*/

#include <iostream>
using namespace std;

int main()
{
    // Testing function
    int v1, v2;
    cout << "Informe dois inteiros: ";
    cin >> v1 >> v2;
    if( v2 != 0)
    {
        cout << "Divisão: " << (float) v1/v2 << endl;
    }
    else
    {
        cout << "Segundo valor tem que ser diferente de zero.\n";
    }
    return 0;
}
