/*
2. Escreva uma função que receba uma string e a imprima modificada, tal que a primeira letra de cada palavra fique em maiúscula. Exemplo:
   String:       teste da função
   Impressão: Teste Da Função
*/

#include <iostream>
using namespace std;

void capitalize(char s[])
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            if(i==0) 
                s[i] = (int) s[i]-32;
            else if(s[i-1] == ' ')
            {
                s[i] = (int) s[i]-32;
            }
        }
    }
}

int main()
{
    char s[100] = "teste da função";
    capitalize(s);
    cout << s << endl;
    return 0;
}
