/*
4. Desenvolva um algoritmo para criar e imprimir uma string que será a concatenação de duas outras strings anteriormente lidas.
*/

#include <iostream>
using namespace std;

int main()
{
    char s1[100], s2[100], s3[200];
    cout << "Informe a primeira string: ";
    cin.getline(s1, 100);
    cout << "Informe a segunda string: ";
    cin.getline(s2, 100);

    // Manually concatenate strings (culd use strcat)
    int i;
    for(i = 0; s1[i] != '\0' && s1[i] != '\n'; i++)
    {
        s3[i] = s1[i];
    }
    int j = i; 
    for(i = 0; s2[i] != '\0' && s2[i] != '\n'; i++, j++)
    {
        s3[j] = s2[i];
    }
    s3[j] = '\0';

    cout << "String resultante: " << endl;
    puts(s3);
    return 0;
}
