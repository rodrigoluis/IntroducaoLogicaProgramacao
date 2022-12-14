/*
Make an algorithm to create and print a string that will be 
the concatenation of two other strings previously read.
*/

#include <iostream>
using namespace std;

int main()
{
    char s1[100], s2[100], s3[200];
    cout << "Write the first string: ";
    cin.getline(s1, 100);
    cout << "Write the second string: ";
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

    cout << "Resulting string: " << endl;
    puts(s3);
    return 0;
}
