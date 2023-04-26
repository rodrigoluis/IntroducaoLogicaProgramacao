/*
Faça um algoritmo para imprimir o valor 2.346728 com 1, 2, 3 e 5 casas decimais.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float val = 2.346728;
    cout << fixed; 
    cout << setprecision(1) << val << endl;
    cout << setprecision(2) << val << endl;    
    cout << setprecision(3) << val << endl;    
    cout << setprecision(5) << val << endl;    
    return 0;
}
