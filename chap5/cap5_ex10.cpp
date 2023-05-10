/*
Desenvolva uma função que receba como parâmetro um número inteiro N e mais dois valores inteiros passados por referência. A função deve ler N valores do teclado e armazenar, nas variáveis passadas por referência, quantos destes valores são maiores ou iguais a zero e quantos são negativos. 
*/

#include <iostream>

using namespace std;

void contaPositivosNegativos(int N, int &positivos, int &negativos) {
    positivos = 0;
    negativos = 0;
    int num;
    for (int i = 0; i < N; i++) {
        cout << "Digite o " << i+1 << "º número: ";
        cin >> num;
        if (num >= 0) {
            positivos++;
        } else {
            negativos++;
        }
    }
}

int main() {
    int N, positivos, negativos;
    cout << "Digite a quantidade de números que serão inseridos: ";
    cin >> N;
    contaPositivosNegativos(N, positivos, negativos);
    cout << "Quantidade de números positivos: " << positivos << endl;
    cout << "Quantidade de números negativos: " << negativos << endl;
    return 0;
}

