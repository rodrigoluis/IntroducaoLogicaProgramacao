/*
8. Faça uma função que receba, por referência, 2 números reais. A função deve ordená-los e armazenar o menor valor no primeiro parâmetro e o maior no segundo. 
*/

#include <iostream>
using namespace std;

void ordenar(int &a, int &b) {
    int temp;

    if (a > b) {
        temp = b;
        b = a;
        a = temp;
    }
}

int main() {
    int a, b;

    cout << "Digite dois números inteiros: ";
    cin >> a >> b;

    cout << "Antes da ordenação: " << a << " " << b << std::endl;

    ordenar(a, b);

    cout << "Depois da ordenação: " << a << " " << b << std::endl;

    return 0;
}
