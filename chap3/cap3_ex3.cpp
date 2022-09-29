/*
Write a function to receive the base and height of a right triangle. 
This function should calculate and return its area using 
the equation Area = (Base * Height) / 2.
*/

#include <iostream>
using namespace std;

float rightTriangleArea(float base, float height)
{
    float area;
    area = (base * height) / 2;
    return area;
}

int main()
{
    float area, base, height;
    cout << "Inform base and height: ";
    cin >> base >> height;
    area = rightTriangleArea(base, height);
    cout << "Area: " << area << endl;
    return 0;
}
