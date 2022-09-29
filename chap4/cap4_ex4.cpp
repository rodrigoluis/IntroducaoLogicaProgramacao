/*
Make a function to receive two real numbers and check 
if both are greater than zero. If so, inform "Values ​​are valid". 
Otherwise, inform "Invalid values".
*/

#include <iostream>
using namespace std;

void checkValues(float v1, float v2)
{
    if(v1>0 && v2>0)
    {
        cout << "Values ​​are valid.\n";
    }
    else
    {
        cout << "Invalid values.\n";
    }
}

int main()
{
    // Testing function
    float v1, v2;
    cout << "Inform two values: ";
    cin >> v1 >> v2;
    checkValues(v1, v2);
    return 0;
}
