/*
Make an algorithm to display the sum of two 3 x 3 matrices. 
Create a function to read a matrix (it will be called twice 
with different parameters) and a second function to print 
the sum, element by element, of the two matrices passed as parameters.
*/

#include <iostream>
using namespace std;

void readMatrix(int mat[3][3])
{
    int i, j;
    cout << "Inform the 6 values of this matrix: ";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin >>mat[i][j];
        }
    }
}

void printSum(int m1[3][3], int m2[3][3])
{
    int i, j;
    cout << "\nSummed values, element by element:\n";
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout << m1[i][j] + m2[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int mat1[3][3], mat2[3][3];
    
    // Read matrices
    readMatrix(mat1);
    readMatrix(mat2);

    // Print sum
    printSum(mat1, mat2);
    return 0;
}
