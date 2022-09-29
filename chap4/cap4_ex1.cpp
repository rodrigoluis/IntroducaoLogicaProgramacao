/*
Make a function to receive two integer numbers and inform if 
the first is greater, less than or equal to the second.
*/

#include <iostream>
using namespace std;

void printGreater(int v1, int v2)
{
    if(v1 > v2)
    {
        cout << "First is greater.\n";
    }
    else
    {
        if(v1 < v2)
        {
            cout << "Second is greater.\n";
        }
        else
        {
            cout << "Number are equal.\n";
        }
    }
}

int main()
{
    // Testing function
    int v1, v2;
    cout << "Inform two integers: ";
    cin >> v1 >> v2;
    printGreater(v1, v2);
    return 0;
}
