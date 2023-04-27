/*
Escreva uma função que receba 5 números reais. A função deve calcular a soma, subtração e multiplicação dos dois primeiros valores e armazenar os resultados nos outros 3 números reais passados por referência. Faça uma função principal que teste a função criada.
*/

#include <iostream>

using namespace std;

void calcular(float num1, float num2, float &soma, float &subtracao, float &multiplicacao) {
    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
}

int main() {
    float num1, num2, soma, subtracao, multiplicacao;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    calcular(num1, num2, soma, subtracao, multiplicacao);

    cout << "Soma: : " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;

    return 0;
}
