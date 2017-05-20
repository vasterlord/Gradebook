#pragma once 
#include <iostream>
#include <string> 
#include <windows.h>
using namespace std; 

class Lecturer
{ 
private:
	string _lecturerSurname; 
	string _position;
public:
	Lecturer(); 
	Lecturer(string position, string lecturerSurname);

	void SetPosition(string position);

	void SetLecturerSurname(string lecturerSurname);

	void SetPosition();

	void SetLecturerSurname();

	string GetPosition();

	string GetLecturerSurname();

	void ShowLecturer();  
	void EnterLecturer();
	virtual void LecturerSurname();

	friend istream& operator >> (istream&, Lecturer&);
	friend ostream& operator << (ostream&, Lecturer&);

	Lecturer& operator()  (string position, string lecturerSurname);
	virtual ~Lecturer();
};

