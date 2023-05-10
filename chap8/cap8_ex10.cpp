/*
Define-se como elemento minimax de uma matriz o menor elemento de uma linha onde se encontra o maior elemento da matriz. Faça uma função que receba uma matriz A[4][4] e outras três variáveis passadas por referência. A função deve encontrar o seu elemento minimax e armazenar nas três variáveis passadas por referência, nesta ordem, seu valor e sua posição (linha e coluna).
*/

#include <iostream>

using namespace std;

void elementoMinimax(float matriz[4][4], float &valor, int &linha, int &coluna) {
    int indiceMaiorElemento = 0;
    float maiorElemento = matriz[0][0];

    // Encontra o índice do maior elemento da matriz
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maiorElemento) {
                maiorElemento = matriz[i][j];
                indiceMaiorElemento = i;
            }
        }
    }

    // Encontra o elemento minimax
    float elementoMinimax = matriz[indiceMaiorElemento][0];
    int indiceElementoMinimax = 0;

    for (int j = 0; j < 4; j++) {
        if (matriz[indiceMaiorElemento][j] < elementoMinimax) {
            elementoMinimax = matriz[indiceMaiorElemento][j];
            indiceElementoMinimax = j;
        }
    }

    // Armazena o valor, a linha e a coluna do elemento minimax nas variáveis de referência
    valor = elementoMinimax;
    linha = indiceMaiorElemento;
    coluna = indiceElementoMinimax;
}

int main() {
    float matriz[4][4] = {{1.0,  2.0, -3.0, 4.0},
                          {5.0,  6.0,  7.0, 8.0},
                          {9.0, -2.0, 18.0, 2.0},  // Minmax -2.0 na posição [2][1])
                          {13.0, 4.0, 15.0, 6.0}};
    float valor;
    int linha, coluna;

    elementoMinimax(matriz, valor, linha, coluna);

    cout << "Elemento minimax: " << valor << endl;
    cout << "Posição (linha/coluna): [" << linha << "][" << coluna << "]" << endl;

    return 0;
}
