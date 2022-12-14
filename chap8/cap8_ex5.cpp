/*
Make an algorithm to read a square matrix of dimension 10, a function 
to find the highest value of this matrix and another function to find 
the lowest value. Print the values ​​found in the main function.
*/

#include <iostream>
using namespace std;
#define N 3

void readMatrix(int mat[N][N])
{
    int i, j;
    cout << "Inform the values of this matrix: ";
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            cin >> mat[i][j];
        }
    }
}

int findLowest(int m[N][N])
{
    int i, j;
    int lowest = m[0][0];
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(m[i][j] < lowest)
                lowest = m[i][j];
        }
    }
    return lowest;
}

int findHighest(int m[N][N])
{
    int i, j;
    int highest = m[0][0];
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(m[i][j] > highest)
                highest = m[i][j];
        }
    }
    return highest;
}

int main()
{
    int mat[N][N];
    int lowest, highest;
    
    // Read matrices
    readMatrix(mat);

    // Find lowest and highest
    lowest  = findLowest(mat);
    highest = findHighest(mat);

    // Print sum
    cout << "Lowest value:  " << lowest << endl;
    cout << "Highest value: " << highest << endl;    

    return 0;
}
