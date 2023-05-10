/*
Escreva uma função que leia os valores n1, n2 e x, e imprima os múltiplos de x que pertencem ao intervalo fechado entre n1 e n2, em ordem crescente.
*/

#include <iostream>
using namespace std;

void imprimeMultiplos(int n1, int n2, int x) {
    cout << "Múltiplos de " << x << " no intervalo [" << n1 << ", " << n2 << "]:" << endl;
    for (int i = n1; i <= n2; i++) {
        if (i % x == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int n1, n2, x;
    cout << "Digite três números inteiros separados por espaço: ";
    cin >> n1 >> n2 >> x;
    imprimeMultiplos(n1, n2, x);
    return 0;
}


