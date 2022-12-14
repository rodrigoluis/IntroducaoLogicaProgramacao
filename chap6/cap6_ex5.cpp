/*
Write an algorithm that reads an array of integers. After, find the smallest 
value and print this value and its index position.
*/

#include <iostream>
using namespace std;

int main()
{
    int array[10]; // = {15, 18, 7, 6, 5, 8, 9, 16, 15, 17};
    int size = 10;         
    int index, value;

    // Read array
    for(int i = 0; i < size; i++)
    {
        cout << "[" << i << "]: ";
        cin >> array[i];
    }

    // Initialize the index and value with first element data
    index = 0;
    value = array[0];

    // find smallest
    for(int i = 1; i < size; i++)
    {
        if(array[i] < value)
        {
            index = i;
            value = array[i];
        }
    }

    cout << "Smaller value is " << value << " and its is in index position " << index << ".\n";

    return 0;
}
