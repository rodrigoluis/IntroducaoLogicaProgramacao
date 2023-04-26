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
    cout << "Inform student's name: ";
    cin.getline(s1.name, sizeof(s1.name));

    cout << "Inform student's course: ";
    cin.getline(s1.course, sizeof(s1.course));

    cout << "Inform student's age: ";
    cin >> s1.age;

    cout << "\nStudents information:\n";
    cout << "  Name:   " << s1.name << endl;
    cout << "  Course: " << s1.course << endl;
    cout << "  Age:    " << s1.age << endl;        
    
    return 0;
}
