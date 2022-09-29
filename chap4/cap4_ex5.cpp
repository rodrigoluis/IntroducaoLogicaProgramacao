/*
Taking the height (in meters) and sex (m for male or f for female) 
of a person as input data, make a function to calculate and return 
his/her ideal weight, using the formula 
weight = (72.7 * height) - 58 for men and 
weight = (62.1 * height) - 44.7 for women.
*/

#include <iostream>
using namespace std;

float computeIdealWeight(float height, char sex)
{
    float weight;
    if(sex == 'm')
    {
        weight = (72.7 * height) - 58;
    }
    else
    {
        weight = (62.1 * height) - 44.7;
    }
    return weight;
}

int main()
{
    // Testing function
    float height, weight;
    char sex;
    cout << "Inform height and sex: ";
    cin >> height >> sex;
    weight = computeIdealWeight(height, sex);
    cout << "Ideal weight: " << weight << endl;
    return 0;
}
