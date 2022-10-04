/*
Make a function that receives a string as a parameter 
and return the number of blank spaces in that string.
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
    cout << "Inform a string: ";
    cin.getline(s, 100);
    spaces = countSpaces(s);
    cout << "Number of Spaces: " << spaces << endl;
    return 0;
}
