/*
Make an algorithm to read a student's data. The data to be stored 
in this structure are name (100 characters), course (40 characters) 
and age (integer). Read and print the data in the main function.
*/

#include <iostream>
using namespace std;

typedef struct 
{
    char name[100];
    char course[40];
    int age;
} student;


int main()
{
    student s1;
    cout << "Inform student's name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    cout << "Inform student's course: ");
    fgets(s1.course, sizeof(s1.course), stdin);

    cout << "Inform student's age: ");
    cin >> %d", &s1.age);

    cout << "\nStudents information:\n");
    cout << "  Name: %s", s1.name);
    cout << "  Course: %s", s1.course);
    cout << "  Age: %d\n", s1.age);        
    
    return 0;
}
