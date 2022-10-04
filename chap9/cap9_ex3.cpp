/*
Make an algorithm to read the information of N students (where N is defined with 
the define directive). The information to be read from each student is name (100 
characters) and a final grade (real). At the end, inform the names of the students 
who were approved (final grade >= 60). Use functions for reading and printing.
*/

#include <iostream>
using namespace std;
#define N 3

struct student
{
    char name[100];
    float grade;
};

void readStudents(student s[])
{
  for(int i = 0; i < N; i++)
  {
    cout << "Inform student's name: ";
    cin.getline(s[i].name, sizeof(s[i].name));

    cout << "Inform student's grade: ";
    cin >> s[i].grade;
    cin.ignore();
  }
}

void printApproved(student s[])
{
  cout << "List of approved students: \n";
  for(int i = 0; i < N; i++)
  {
    if(s[i].grade >= 60)
    {
      cout << s[i].name << endl;
    }
  }
}


int main()
{
    student s[N];
    readStudents(s);
    printApproved(s);
    return 0;
}
