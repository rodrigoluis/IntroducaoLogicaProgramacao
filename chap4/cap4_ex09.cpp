/*
10. Faça uma função que receba, por referência, 3 números inteiros . A função ordená-los e armazenar o menor valor no primeiro parâmetro, o valor intermediário no segundo e o maior valor no terceiro. 
*/

#include <iostream>
using namespace std;

void ordenar(int &a, int &b, int &c) {
    int menor, intermediario, maior;

    if (a <= b && a <= c) {
        menor = a;
        if (b <= c) {
            intermediario = b;
            maior = c;
        }
        else {
            intermediario = c;
            maior = b;
        }
    }
    else if (b <= a && b <= c) {
        menor = b;
        if (a <= c) {
            intermediario = a;
            maior = c;
        }
        else {
            intermediario = c;
            maior = a;
        }
    }
    else {
        menor = c;
        if (a <= b) {
            intermediario = a;
            maior = b;
        }
        else {
            intermediario = b;
            maior = a;
        }
    }

    a = menor;
    b = intermediario;
    c = maior;
}

int main() {
    int a, b, c;

    cout << "Digite os três numeros: ";
    cin >> a >> b >> c;

    ordenar(a, b, c);

    cout << "Os números ordenados são: " << a << " " << b << " " << c << endl;

    return 0;
}
