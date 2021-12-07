//#pragma once
#ifndef food_h
#define food_h
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <cstring>
#include <istream>
#include <string>
class Student
{
	private:
		char Name[256];
		char Surname[256];
		int Mark;
		unsigned Age;

	public:
		Student(const char* name = "unknown", const char* surname = "unknown", unsigned age = 0, int mark = 0);
		const char* get_name() const { return Name; }
		const char* get_surname() const { return Surname; }
		unsigned get_age() const { return Age; };
		int get_mark() const { return Mark; }		
		void Print();
};
#endif

