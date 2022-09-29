/*
Make a function that receives number of the day of the week and print its name. 
Consider number 1 as Sunday, 2 for Monday, etc. If the day 
does not exist (less than 1 or greater than 7), display the 
message "Invalid day of the week".
*/

#include <iostream>
using namespace std;

void printName(int day)
{
    switch(day)
    {
        case 1:
            cout << "Sunday.\n";
            break;
        case 2:
            cout << "Monday.\n";
            break;
        case 3:
            cout << "Tuesday.\n";
            break;
        case 4:
            cout << "Wednesday.\n";
            break;
        case 5:
            cout << "Thursday.\n";
            break;
        case 6:
            cout << "Friday.\n";
            break;
        case 7:
            cout << "Saturday.\n";
            break;
        default:            
            cout << "Invalid day of the week.\n";
    }
}

int main()
{
    // Testing function
    int day;
    cout << "Inform the number of the day: ";
    cin >> day;
    printName(day);
    return 0;
}
