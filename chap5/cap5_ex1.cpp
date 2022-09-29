/*
Write a function to print all even numbers in the range 1-100.
*/

#include <iostream>
using namespace std;

void printEvenNumbers()
{
    int i;
    for(i = 0; i <= 100; i+=2)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    printEvenNumbers();
    return 0;
}
