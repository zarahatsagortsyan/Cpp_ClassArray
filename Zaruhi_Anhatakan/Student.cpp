#include "Student.h"
#include <cstring>
Student::Student(const char* name, const char * surname, unsigned age, int mark ) {
    strcpy_s(Name, name);  
    strcpy_s(Surname, surname);
    Age = age;   
    Mark = mark;
}

void Student::Print()
{
    cout << Name << " " << Surname << "(" << Age << ")" << " - " << Mark << endl;
}
