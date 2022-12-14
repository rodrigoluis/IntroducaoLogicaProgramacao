/*
Write a function to receive a string and return 1 if it is a 
palindrome or zero otherwise. A word is said to be palindrome 
if the sequence of its characters from left to right is the 
same as the sequence of its characters from right to left 
(Ex .: level, stats).
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
