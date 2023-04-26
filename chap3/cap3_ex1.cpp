/*
Escreva uma função para receber dois números inteiros e imprimir o produto desses valores.
*/

#include <iostream>
using namespace std;

void printProduct(int n1, int n2)
{
    int p;
    p = n1 * n2;
    cout << "Product: " << p << endl;

}

int main()
{
    int n1, n2;
    cout << "Inform two integers: ";
    cin >> n1 >> n2;
    printProduct(n1, n2);
    return 0;
}
