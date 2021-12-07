// Zaruhi_Anhatakan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Student.h"
#include <iostream>
void SortStudents(Student students[],int  n)
{
	Student tmp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < (n - i); j++)
		{
			if (students[j].get_mark() > students[j + 1].get_mark())
			{
				tmp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int			n;
	char		name[256] ;
	char		surname[256] ;
	int			mark;
	unsigned	age;

	cout << "Insert the count of students - ";
	cin >> n;	

	if (n != 0)
	{
		Student * students = new Student[n];
		for(int i = 0;  i< n; i++)
		{
			cout << "------------------"<<i+1<<"--------------------"<< endl;
			cout << "Name = ";
			cin >> name;
			cout << "Surname = ";
			cin >> surname;
			cout  << "age = ";
			cin >> age;
			cout  << "Mark = ";
			cin >> mark; 
			cout << endl;
			students[i] = Student((char *)name,(char *)surname, age, mark);
		}

		cout << "----------------------Students--------------------" << endl;
		for (int i = 0;  i < n;  i++)
		{
			students[i].Print();
		}

		SortStudents(students, n);
		cout << endl << "----------------sorted students-------------------" << endl;
		for (int i = 0; i < n; i++)
		{
			students[i].Print();
		}
		delete[] students;
	}
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
