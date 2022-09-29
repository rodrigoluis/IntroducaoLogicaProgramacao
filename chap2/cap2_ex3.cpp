/*
Read a temperature in degrees Celsius and have it converted to Fahrenheit.
The conversion formula: F = (9 * C + 160) / 5.
*/

#include <iostream>
using namespace std;

int main()
{
    float celsius, fahrenheit;    
    cout << "Insert a temperature in celsius: ";
    cin >> celsius;

    fahrenheit = (9*celsius+160)/5.0;

    cout << "Temperature in fahrenheit: " << fahrenheit << endl;
    return 0;
}
