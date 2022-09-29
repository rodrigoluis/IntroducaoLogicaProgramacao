/*
The employees of a company received a salary increase: 
technicians (code = 1), 50% increase; managers (code = 2), 
30%; other employees (code = 3), 20%. Write a function 
that receives an employee's job code and a salary, 
calculate and print the new salary after the increase.
*/

#include <iostream>
using namespace std;

void printNewSalary(int code, float salary)
{
    float newSalary;
    switch(code)
    {
        case 1:
            newSalary = salary * 1.50;
            cout << "New Salary: " << newSalary << endl;
            break;
        case 2:
            newSalary = salary * 1.30;
            cout << "New Salary: " << newSalary << endl;
            break;
        case 3:
            newSalary = salary * 1.20;
            cout << "New Salary: " << newSalary << endl;
            break;
        default:            
            cout << "Invalid code.\n";
    }
}

int main()
{
    // Testing function
    int code;
    float salary;
    cout << "Inform the code and the salary: ";
    cin >> code >> salary;
    printNewSalary(code, salary);
    return 0;
}
