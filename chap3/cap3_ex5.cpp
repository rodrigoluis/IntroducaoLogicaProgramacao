/*
Write a function to receive a student's three grades and 
return the weighted average. Consider the following 
values ​​for the weight of the grades: 2, 3, 5.
*/

#include <iostream>
using namespace std;

float weightedAverage(float n1, float n2, float n3)
{
    float average;
    average = (n1 * 2 + n2 * 3 + n3 * 5)/10.0;
    return average;
}

int main()
{
    float g1, g2, g3, average;
    cout << "Inform students's grades: ";
    cin >> g1 >> g2 >> g3;
    average = weightedAverage(g1, g2, g3);
    cout << "Average grade: " << average << endl;
    return 0;
}
