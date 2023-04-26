/*
1. Faça um algoritmo para ler os dados de um aluno. Os dados a serem guardados nesta estrutura são nome (100 caracteres), curso (40 caracteres) e idade (inteiro). Fazer a leitura e a impressão dos dados na função principal.
*/

#include <iostream>
using namespace std;

struct student
{
    char name[100];
    char course[40];
    int age;
};


int main()
{
    student s1;
    cout << "Informe o nome do estudante: ";
    cin.getline(s1.name, sizeof(s1.name));

    cout << "Informe curso do estudante: ";
    cin.getline(s1.course, sizeof(s1.course));

    cout << "Informe a idade do estudante: ";
    cin >> s1.age;

    cout << "\nInformações do estudante:\n";
    cout << "  Nome:  " << s1.name << endl;
    cout << "  Curso: " << s1.course << endl;
    cout << "  Idade: " << s1.age << endl;        
    
    return 0;
}
