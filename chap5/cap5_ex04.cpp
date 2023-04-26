/*
4. Escreva uma função para receber como parâmetro um valor n inteiro e positivo e calcular o valor de S. A função retornará o valor de S.
 S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n 
*/

#include <iostream>
using namespace std;

float computeFunc(int n)
{
    float S = 0;
    for(int i = 1; i <= n; i++)
    {
        S = S + 1 / (float) i; 
    }
    return S;
}

int main()
{
    int n;
    float S;
    cout << "Informe n: ";
    cin >> n;
    S = computeFunc(n);
    cout << "S = " << S << endl;
    return 0;
}
