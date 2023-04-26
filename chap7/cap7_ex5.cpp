/*
5. Escreva uma função que receba uma string e retorne 1 se a mesma for um palíndromo ou zero caso contrário. Uma palavra é dita ser palíndromo se a sequência de seus caracteres da esquerda para a direita é igual a sequência de seus caracteres da direita para a esquerda (Ex.: arara, asa).
*/

#include <iostream>
#include <cstring>
using namespace std;

int checkPalindrome(char s[])
{
    int i, j, size = (int) strlen(s)-1;
    for(i = 0, j = size; i < size/2; i++, j--)
    {
        if(s[i] != s[j])
            return 0;
    }
    return 1;
}

int main()
{
    char s[100] = "stats";
    int result;
    result = checkPalindrome(s);
    if(result)
        cout << "Is a palindrome.\n";
    else
        cout << "Is not a palindrome.\n";
    return 0;
}
