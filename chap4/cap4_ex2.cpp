/*
Make a program to read two integer numbers and divide 
the first by the second, only if the second is different 
from zero. At the end, print the result or a message 
if the second number was zero.
*/

#include <iostream>
using namespace std;

int main()
{
    // Testing function
    int v1, v2;
    cout << "Inform two integers: ";
    cin >> v1 >> v2;
    if( v2 != 0)
    {
        cout << "Result: " << (float) v1/v2 << endl;
    }
    else
    {
        cout << "Second value must be different from zero.\n";
    }
    return 0;
}
