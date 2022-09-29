/*
Make an algorithm to read an array of real numbers of size 6 
and print the arithmetic mean of the elements of this array.
*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    float vet[6], sum = 0, mean;
    
    cout << "Inform 6 values: ";
    for(i = 0; i < 6; i++)
    {
        cin >> vet[i];
        sum+=vet[i];
    }
    mean = sum / 6.0;
    cout << "Average: " << mean << endl;
    return 0;
}
