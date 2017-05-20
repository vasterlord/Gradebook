#pragma once
#include <iostream>
#include <string> 
#include <windows.h> 
#include "Student.h" 
#include "Lecturer.h"
using namespace std;

class Exam: public Student, public Lecturer
{
private:
	string _subject;
	int _countHours;
	string _date;
	int _mark;
public:
	Exam(); 
	Exam(string group, string studentSurname, string position, string lecturerSurname, string subject, int countHours, string date, int mark); 
	 
	void SetSubject(); 
	void SetSubject(string subject); 
	 
	void SetCountHours(); 
	void SetCountHours(int countHours); 
	 
	void SetDate(); 
	void SetDate(string date);
	  
	void SetMark();
	void SetMark(int mark);  
	 
	string GetSubject(); 
	int GetCountHours(); 
	string GetDate(); 
	int GetMark();  
	 
	void EnterExam(); 
	void ShowExam(); 
	void ShowExamResult();
	  
	string GetCurrentDateTime(); 

	void LecturerSurname()override; 
	void StudentSurname()override; 

	virtual ~Exam();
};
