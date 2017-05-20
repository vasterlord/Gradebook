#pragma once 
#include <iostream>
#include <string> 
#include <windows.h>
using namespace std;
class Student
{ 
private: 
	string _group; 
	string _studentSurname; 
public:
	Student();
	Student(string group, string studentSurname);
	 
	void SetGroup(string group); 

	void SetStudentSurname(string studentSurname); 

	void SetGroup(); 

	void SetStudentSurname(); 

	string GetGroup();  

	string GetStudentSurname(); 

	void ShowStudent();  
	void EnterStudent();
	 
	virtual void StudentSurname();

	friend istream& operator >> (istream&, Student&);
	friend ostream& operator << (ostream&, Student&);


	Student& operator()  (string group, string studentSurname);

	virtual ~Student();
};

