/*
Build an algorithm to read 5 integer values, 
calculate and print the sum of those values.
*/

#include <iostream>
using namespace std;

int main()
{
    int v1, v2, v3, v4, v5, sum;    
    cout << "Insert 5 integer values: ";
    cin >> v1 >> v2 >> v3 >> v4 >> v5;

    sum = v1 + v2 + v3 + v4 + v5;

    cout << "Sum of the values: " << sum << endl;
    return 0;
}
