/*
Print the value 2.346728 with 1, 2, 3 and 5 decimal places.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float val = 2.346728;
    cout << fixed; 
    cout << setprecision(1) << val << endl;
    cout << setprecision(2) << val << endl;    
    cout << setprecision(3) << val << endl;    
    cout << setprecision(5) << val << endl;    
    return 0;
}
