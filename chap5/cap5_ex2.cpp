/*
2. Escreva uma função int somaintervalo (int n1, int n2) para retornar a soma dos números inteiros que existem no intervalo fechado entre n1 e n2. A função deve funcionar inclusive se o valor de n2 for menor que n1.
 n=somaintervalo(3, 6); // n recebe 18 (3+4+5+6) 
 n=somaintervalo(5, 5);  // n recebe 5 (5) 
 n=somaintervalo(4, 0); // n recebe 10 (4+3+2+1+0) 
*/

#include <iostream>
using namespace std;

int sumInterval(int n1, int n2)
{
    if(n1>n2)
    {
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }
    int sum = 0;
    for(int i = n1; i <= n2; i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int sum, n1, n2;
    cout << "Inform 2 numbers: ";
    cin >> n1 >> n2;
    sum = sumInterval(n1, n2);
    cout << "Sum of the interval: " << sum << endl;
    return 0;
}
