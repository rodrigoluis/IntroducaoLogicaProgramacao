/*
Faça uma função que receba uma matriz 3 x 3 e outras duas variáveis passadas por referência, todas reais. A função deve encontrar o menor e o maior valor da matriz e armazenar esses valores nas variáveis passadas por referência.
*/

#include <iostream>

using namespace std;

void minMaxMatriz(float matriz[3][3], float &minimo, float &maximo) {
    minimo = matriz[0][0];
    maximo = matriz[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] < minimo) {
                minimo = matriz[i][j];
            }

            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
            }
        }
    }
}

int main() {
    float matriz[3][3] = {{12.0,  2.0, 3.0},
                          { 4.0, -5.0, 6.0},
                          { 7.0, 18.0, 9.0}};
    float minimo, maximo;

    minMaxMatriz(matriz, minimo, maximo);

    cout << "O menor valor da matriz e: " << minimo << endl;
    cout << "O maior valor da matriz e: " << maximo << endl;

    return 0;
}
