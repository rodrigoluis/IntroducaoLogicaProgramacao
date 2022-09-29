/*
Calculate and display the volume of an oil can, 
using the formula volume = 3.14159 * radius * radius * height.
*/

#include <iostream>
using namespace std;

int main()
{
    float radius, height, volume;   
    cout << "Inform radius and height of the oil can: ";
    cin >> radius >> height;

    volume = 3.14159 * radius * radius * height;

    cout << "Volume = " << volume << endl;
    return 0;
}
