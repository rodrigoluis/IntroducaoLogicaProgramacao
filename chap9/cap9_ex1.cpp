/*
Make an algorithm to read a student's data. The data to be stored 
in this structure are name (100 characters), course (40 characters) 
and age (integer). Read and print the data in the main function.
*/

#include <iostream>
using namespace std;

struct student
{
    char name[100];
    char course[40];
    int age;
};


int main()
{
    student s1;
    cout << "Inform student's name: ";
    cin.getline(s1.name, sizeof(s1.name));

    cout << "Inform student's course: ";
    cin.getline(s1.course, sizeof(s1.course));

    cout << "Inform student's age: ";
    cin >> s1.age;

    cout << "\nStudents information:\n";
    cout << "  Name:   " << s1.name << endl;
    cout << "  Course: " << s1.course << endl;
    cout << "  Age:    " << s1.age << endl;        
    
    return 0;
}
