/*
Write a function to receive a man's height in meters, 
calculate and print his ideal weight (in kg) with 
the formula IdealWeight = (72.7 * height - 58).
*/

#include <iostream>
using namespace std;

void computeIdealWeight(float height)
{
    float IdealWeight;
    IdealWeight = (72.7 * height - 58);
    cout << "Ideal Weight: " << IdealWeight << " kg\n";
}

int main()
{
    float height;
    cout << "Inform men's height: ";
    cin >> height;
    computeIdealWeight(height);
    return 0;
}
