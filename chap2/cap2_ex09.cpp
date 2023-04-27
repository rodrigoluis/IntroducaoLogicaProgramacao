/*
9. Faça um algoritmo que leia a idade de uma pessoa expressa em dias e imprima-a expressa em anos, meses e dias. Nota: considere neste exercício 1 mês = 30 dias e 1 ano = 365 dias.
*/

#include <iostream>

using namespace std;

int main() {

    int idadeEmDias, anos, meses, dias;

    cout << "Digite a idade em dias: ";
    cin >> idadeEmDias;

    anos = idadeEmDias / 365;
    idadeEmDias %= 365;

    meses = idadeEmDias / 30;
    idadeEmDias %= 30;

    dias = idadeEmDias;

    cout << "A idade em anos, meses e dias e: " << anos << " anos, " << meses << " meses e " << dias << " dias." << endl;

    return 0;
}