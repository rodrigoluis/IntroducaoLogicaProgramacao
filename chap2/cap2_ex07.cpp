/*
Calcule e apresente o volume de uma lata de óleo, utilizando a fórmula volume = 3.14159 * raio * raio * altura.
*/

#include <iostream>
using namespace std;

int main()
{
    float radius, height, volume;   
    cout << "Informe o raio e altura da lata de óleo: ";
    cin >> radius >> height;

    volume = 3.14159 * radius * radius * height;

    cout << "Volume = " << volume << endl;
    return 0;
}
