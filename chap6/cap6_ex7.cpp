/*
Make a function to receive an array of integers, its size and a value 
to be searched for in this array. The function must return the number 
of occurrences of this value in the array.
*/

#include <iostream>
using namespace std;

int countOccurrences(int array[], int size, int value)
{
    int counter = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] == value)
            counter++;
    }
    return counter;
}

int main()
{
    int v[10] = {15, 18, 7, 6, 5, 8, 9, 16, 15, 17};
    int value = 15;
    int count = countOccurrences(v, 10, value);
    cout << "Number of ocurrences of " << value << " in the array is " << count << ".\n"; 
    return 0;
}
