/*
1. Faça uma função que receba uma string como parâmetro e retorne o número de espaços em branco desta string.
*/

#include <iostream>
using namespace std;

int countSpaces(char s[])
{
    int i, count = 0;
    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
            count++;
    }
    return count;
}

int main()
{
    char s[100];
    int spaces;
    cout << "Informe uma string: ";
    cin.getline(s, 100);
    spaces = countSpaces(s);
    cout << "Número de espaços: " << spaces << endl;
    return 0;
}
