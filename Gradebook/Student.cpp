#include "stdafx.h"
#include "Student.h"
#include <iostream>
#include <string> 
#include <windows.h>
using namespace std;

Student::Student()
{ 
	_group = "Unknown"; 
	_studentSurname = "Unknown";
}
 
Student::Student(string group, string studentSurname)
{
	SetGroup(group);
	SetStudentSurname(studentSurname);
}  
  
void Student::SetGroup()
{  
	cout << " Enter group : \n"; 
	cin >> _group;
}  
void Student::SetGroup(string group)
{ 
	_group = group;
}
  
void Student::SetStudentSurname(string studentSurname)
{ 
	_studentSurname = studentSurname;
} 

void Student::SetStudentSurname() 
{  
	cout << " Enter student surname : \n";
	cin >> _studentSurname;
}

string Student::GetGroup()  
{ 
	return _group;
}
 
string Student::GetStudentSurname()  
{ 
	return _studentSurname;
} 
 
void Student::ShowStudent()  
{ 
	cout << " Group:  " << _group<< ", student surname  " << _studentSurname << endl;
}
  
void Student::StudentSurname()  
{ 
cout << _studentSurname << endl;
}
  
void Student::EnterStudent()  
{ 
	SetGroup(); 
	SetStudentSurname();
}
istream& operator >> (istream& is, Student& studnet)
{ 
	cout << " Enter group : \n";
	cin >> studnet._group;
	cout << " Enter student surname : \n";
	cin >> studnet._studentSurname;
	return is;
}

ostream& operator<<(ostream& os, Student& student)
{
	cout << " 'Group  " << student._group << ", student surname  " << student._studentSurname << endl;
	return os;
} 
 
Student& Student::operator()(string group, string studentSurname)
{
	this->_group = group; 
	this->_studentSurname = studentSurname;
	return *this;
} 

Student::~Student()
{ 
	OutputDebugString(L"Student destructor worked");
}
