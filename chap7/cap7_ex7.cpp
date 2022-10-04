/*
Make a function that receives a string and another character. 
The function should remove all occurrences of the character 
passed by the parameter and return the number of removals performed. 
Print the resulting string in the main function.
*/

#include <iostream>
using namespace std;
#include <string.h>

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
