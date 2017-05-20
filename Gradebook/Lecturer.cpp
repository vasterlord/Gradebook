#include "stdafx.h"
#include "Lecturer.h"
#include <iostream>
#include <string> 
#include <windows.h>
using namespace std;


Lecturer::Lecturer()
{ 
	_lecturerSurname = "Unknown";
	_position = "Unknown";
}

Lecturer::Lecturer(string position, string lecturerSurname)
{
	SetPosition(position);
	SetLecturerSurname(lecturerSurname);
}

void Lecturer::SetPosition()
{
	cout << " Enter position : \n";
	cin >> _position;
}
void Lecturer::SetPosition(string position)
{
	_position = position;
}

void Lecturer::SetLecturerSurname(string lecturerSurname)
{
	_lecturerSurname = lecturerSurname;
}

void Lecturer::SetLecturerSurname()
{
	cout << " Enter lecturer surname : \n";
	cin >> _lecturerSurname;
}

string Lecturer::GetPosition()
{
	return _position;
}

string Lecturer::GetLecturerSurname()
{
	return _lecturerSurname;
}

void Lecturer::ShowLecturer()
{
	cout << " 'Position  " << _position << ", lecturer surname  " << _lecturerSurname << endl;
}

void Lecturer::LecturerSurname()
{
	cout << _lecturerSurname << endl;
}
 
void Lecturer::EnterLecturer()  
{ 
	SetPosition(); 
	SetLecturerSurname();
}

istream& operator >> (istream& is, Lecturer& lecturer)
{
	cout << " Enter position : \n";
	cin >> lecturer._position;
	cout << " Enter lecturer surname : \n";
	cin >> lecturer._lecturerSurname;
	return is;
}

ostream& operator<<(ostream& os, Lecturer& lecturer)
{
	cout << " 'Position  " << lecturer._position << ", lecturer surname  " << lecturer._lecturerSurname << endl;
	return os;
}

Lecturer& Lecturer::operator()(string position, string lecturerSurname)
{
	this->_position = position; 
	this->_lecturerSurname = lecturerSurname;
	return *this;
} 

Lecturer::~Lecturer()
{ 
	OutputDebugString(L"Lecturer destructor worked");
}
