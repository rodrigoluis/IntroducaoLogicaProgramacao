/*
7. Faça uma função para receber uma string e um caractere qualquer. A função deve remover todas as ocorrências do caractere passado por parâmetro e retornar o número de remoções realizadas. Imprima a string modificada na função principal.
*/

#include <iostream>
using namespace std;

int removeChar(char s[], char ch)
{
    int i, j, count = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ch)
        {
            count++;
            for(j = i; s[j] != '\0'; j++)
            {
                s[j] = s[j+1];
            }
        }
    }
    return count;
}

int main()
{
    char s[100] = "test of the function";
    char ch = 't';
    int removed;
    cout << "Input: " << s << endl;
    removed = removeChar(s, ch);
    cout << "Final: " << s << endl;
    cout << "Character \'" << ch << "\' was removed " << removed << " times." << endl;

    return 0;
}
