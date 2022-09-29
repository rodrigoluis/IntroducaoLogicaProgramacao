/*
Given a debt of $ 10,000.00 that grows at 2.5% rate per month 
and an investment of $ 1,500.00 with a yield of 4% per month, 
write a function to determine the number of months needed to 
pay the debt using this investment.
*/

#include <iostream>
using namespace std;

int monthsNeeded(float debt, float debtRate, 
                 float invest, float yield)
{
    int months = 0;
    while(invest < debt )
    {
        debt = debt + (debt * debtRate)/100.0;
        invest = invest + (invest * yield)/100.0;
        months++;
    }
    return months;
}

int main()
{
    // Test function
    int months = monthsNeeded(10000, 2.5, 1500, 4);
    cout << "Months: " << months << endl;
    return 0;
}
