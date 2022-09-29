/*
Write a function to calculate and return N! (factorial of N). 
The integer value N will be provided by the user. Consider, by definition, that:
 N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1 
 0! = 1 
*/

#include <iostream>
using namespace std;

int fatorial(int n)
{
    int fat;
    for(fat = 1; n > 1; n = n - 1)
    {
        fat = fat * n;
    }
    return fat;
}

int main()
{
    // Test function
    int n;
    cout << "Inform an integer: ";
    cin >> n;
    cout << n << "! = " << fatorial(n) << endl;
    return 0;
}
