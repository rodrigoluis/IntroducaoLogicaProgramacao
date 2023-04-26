/*
6. Faça um algoritmo para ler uma string e transferir as consoantes para um vetor e as vogais para outro. Ao final, imprimir cada um dos vetores criados.
*/

#include <iostream>
using namespace std;


bool isLetter(char ch)
{
    if(ch >= 'a' && ch <= 'z' ||
       ch >= 'A' && ch <= 'Z')
       return true;
    return false; 
}

bool isVowel(char ch)
{
    // put char to lower case just here
    if(ch >= 'A' && ch <= 'Z')
        ch = ch + 32;
    // Now, check only lower case vowels 
    if(ch == 'a' || ch == 'e' || ch == 'i' ||
       ch == 'o' || ch == 'u')
       return true;
    return false;
}

void splitString(char s[], char vow[], char con[])
{
    int i, j = 0, k = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if( isLetter( s[i] ) )
        { 
            if(isVowel( s[i] ) )
            { 
                vow[j] = s[i];
                j++;
            }
            else
            {
                con[k] = s[i];
                k++;
            }
        }
    }
    vow[j] = con[k] = '\0';
}

int main()
{
    char s[100] = "test of the function";
    char vow[100], con[100];
    splitString(s, vow, con);
    cout << "Original: " << s << endl;
    cout << "Vowels:   " << vow << endl;
    cout << "Cons:     " << con << endl;
    return 0;
}
