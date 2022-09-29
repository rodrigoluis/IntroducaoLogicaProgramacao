/*
Given an array containing the age of 10 students, write a function 
that returns the number of students over the average age. 
The function will receive the array and its size.
*/

#include <iostream>
using namespace std;

int countOverAge(int ages[], int size)
{
    int i, sum = 0;
    // compute average
    for(i = 0; i < size; i++)
    {
        sum += ages[i];
    }
    float average = sum/(float) size;
    cout << "Average age: " << average << endl;

    // count students
    int counter = 0;
    for(i = 0; i < size; i++)
    {
        if(ages[i] > average)
            counter++;
    }
    return counter;
}

int main()
{
    int ages[10] = {15, 18, 7, 6, 5, 8, 9, 16, 15, 17};
    int over = countOverAge(ages, 10);
    cout << "Students over average age: " << over << endl; 
    return 0;
}
