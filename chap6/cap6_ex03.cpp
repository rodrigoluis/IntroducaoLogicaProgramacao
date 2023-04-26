/*
3. Dada uma tabela contendo a idade de 10 alunos, faça uma função que retorne o número de alunos com idade superior a média. A função receberá o vetor e seu tamanho.
*/

#include <iostream>
using namespace std;

int countOverAge(int ages[], int size)
{
    int i, sum = 0;
    // compute average
    for(i = 0; i < size; i++)
    {
        sum += ages[i];
    }
    float average = sum/(float) size;
    cout << "Average age: " << average << endl;

    // count students
    int counter = 0;
    for(i = 0; i < size; i++)
    {
        if(ages[i] > average)
            counter++;
    }
    return counter;
}

int main()
{
    int ages[10] = {15, 18, 7, 6, 5, 8, 9, 16, 15, 17};
    int over = countOverAge(ages, 10);
    cout << "Students over average age: " << over << endl; 
    return 0;
}
