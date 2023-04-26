/*
3. Crie uma função para receber uma string e a inverta caractere a caractere. Imprima a string resultante na função principal.
*/

#include <iostream>
#include <cstring>
using namespace std;

void invertString(char s[])
{
    char aux;
    int i, j, size = (int) strlen(s)-1;
    for(i = 0, j = size; i < size/2; i++, j--)
    {
        aux = s[i];
        s[i] = s[j];
        s[j] = aux;
    }
}

int main()
{
    char s[100];
    cin.getline(s, 100);
    invertString(s);
    puts(s);
    return 0;
}
