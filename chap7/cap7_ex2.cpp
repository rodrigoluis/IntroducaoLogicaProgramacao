/*
Write a function that receives a string and print it modified, 
such that the first letter of each word is capitalized. 
Example:
   Input:  test of the function
   Output: Test Of The Function
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
    char s[100] = "test of the function";
    capitalize(s);
    cout << s << endl;
    return 0;
}
