/*
Write a function to receive a person's age in years, months and days 
and return that age expressed in days. Consider each year has 365 days
 and each month has 30 days. Print the computed days in the main function.
*/

#include <iostream>
using namespace std;

int computeAge(int year, int months, int days)
{
    int ageInDays = 0;
    ageInDays = 365 * year + 30 * months + days;
    return ageInDays;
}

int main()
{
    // Testing the function
    int output;
    output = computeAge(23, 7, 15);
    cout << "Number of computed days: " << output << endl;
    return 0;
}
