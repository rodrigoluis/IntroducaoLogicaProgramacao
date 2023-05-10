/*
Escreva uma função que receba um inteiro x e imprima todos os seus divisores positivos.
*/

#include <iostream>
using namespace std;

void imprimeDivisores(int x) {
    cout << "Divisores de " << x << ":" << endl;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int num;
    cout << "Digite um número inteiro positivo: ";
    cin >> num;
    imprimeDivisores(num);
    return 0;
}

