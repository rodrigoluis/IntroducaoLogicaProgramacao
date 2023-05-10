/*
8. Faça uma função que receba uma string S e dois inteiros não-negativos I e J. A função deverá imprimir o segmento S[I..J].
*/

#include <iostream>
#include <cstring>

using namespace std;

void imprimeSegmento(char s[], int i, int j) {
    int tam = strlen(s);
    if (i < 0 || j >= tam || i > j) {
        cout << "Índices inválidos" << endl;
        return;
    }
    for (int k = i; k <= j; k++) {
        cout << s[k];
    }
    cout << endl;
}

int main() {
    char s[] = "Programação é legal";
    int i = 4, j = 12;

    imprimeSegmento(s, i, j);

    return 0;
}



