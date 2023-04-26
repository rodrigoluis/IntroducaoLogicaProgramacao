/*
4. Faça um algoritmo para ler as informações de N alunos (sendo N definido com a diretiva define).  As informações que deverão ser lidas de cada aluno são nome (100 caracteres) e média final (real). Ao final, informe os nomes dos alunos que foram aprovados (média final >= 60). Para a leitura e a impressão usar funções.
*/

#include <iostream>
using namespace std;
#define N 3

struct student
{
    char name[100];
    float grade;
};

void readStudents(student s[])
{
  for(int i = 0; i < N; i++)
  {
    cout << "Nome do estudante: ";
    cin.getline(s[i].name, sizeof(s[i].name));

    cout << "Média final: ";
    cin >> s[i].grade;
    cin.ignore();
  }
}

void printApproved(student s[])
{
  cout << "Lista dos estudantes aprovados: \n";
  for(int i = 0; i < N; i++)
  {
    if(s[i].grade >= 60)
    {
      cout << s[i].name << endl;
    }
  }
}


int main()
{
    student s[N];
    readStudents(s);
    printApproved(s);
    return 0;
}
