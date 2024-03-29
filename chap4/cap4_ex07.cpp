/*
7. Os funcionários de uma empresa receberam um aumento de salário: técnicos (código = 1), 50%; gerentes (código = 2), 30%; demais funcionários (código = 3), 20%. Escreva uma função para ler o código do cargo de um funcionário e o valor do seu salário atual. Após a leitura, calcule e imprima o novo salário após o aumento.
*/

#include <iostream>
using namespace std;

void printNewSalary(int code, float salary)
{
    float newSalary;
    switch(code)
    {
        case 1:
            newSalary = salary * 1.50;
            cout << "Novo salário: " << newSalary << endl;
            break;
        case 2:
            newSalary = salary * 1.30;
            cout << "Novo salário: " << newSalary << endl;
            break;
        case 3:
            newSalary = salary * 1.20;
            cout << "Novo salário: " << newSalary << endl;
            break;
        default:            
            cout << "Código inválido.\n";
    }
}

int main()
{
    // Testing function
    int code;
    float salary;
    cout << "Informe o código do salário: ";
    cin >> code >> salary;
    printNewSalary(code, salary);
    return 0;
}
