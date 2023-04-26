/*
5. Tendo como dados de entrada a altura (em metros) e o sexo de uma pessoa ('m' para masculinoe e 'f' para feminino), faça uma função para calcular e retornar seu peso ideal, utilizando a fórmula peso = (72.7*altura)-58 para homens e peso = (62.1*altura)-44.7 para mulheres.
*/

#include <iostream>
using namespace std;

float computeIdealWeight(float height, char sex)
{
    float weight;
    if(sex == 'm')
    {
        weight = (72.7 * height) - 58;
    }
    else
    {
        weight = (62.1 * height) - 44.7;
    }
    return weight;
}

int main()
{
    // Testing function
    float height, weight;
    char sex;
    cout << "Informe altura e sexo: ";
    cin >> height >> sex;
    weight = computeIdealWeight(height, sex);
    cout << "Peso ideal: " << weight << endl;
    return 0;
}
