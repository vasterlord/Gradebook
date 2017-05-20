#include "stdafx.h"
#include "Exam.h"
#include <stdio.h>
#include <time.h> 
#include <iostream>
#include <string> 
#include <windows.h> 
#pragma warning(disable:4996)
using namespace std;

Exam::Exam():Student(),Lecturer()
{ 
	_subject = "Unknown";
	_countHours = 20;
	_date = GetCurrentDateTime();
	_mark = 2;
}

Exam::Exam(string group, string studentSurname, string position, string lecturerSurname, string subject, int countHours, string date, int mark) :Student(group, studentSurname), Lecturer(position, lecturerSurname)
{ 
	SetSubject(subject); 
	SetCountHours(); 
	SetDate(); 
	SetMark(); 
}
  
void Exam::SetSubject()
{
	cout << " Enter subject : \n";
	cin >> _subject;
} 
void Exam::SetCountHours()
{
	cout << " Enter count hours : \n";
	cin >> _countHours;
} 
void Exam::SetDate()
{
	cout << " Enter date : \n";
	cin >> _date;
} 
void Exam::SetMark()
{
	cout << " Enter mark : \n";
	cin >> _mark;
} 
 
void Exam::SetSubject(string subject)
{
	_subject = subject;
}
void Exam::SetCountHours(int countHours)
{
	 _countHours = countHours;
}
void Exam::SetDate(string date)
{
	 _date = date;
}
void Exam::SetMark(int mark)
{
	 _mark = mark;
}
  
string Exam::GetSubject()  
{ 
	return _subject;
} 
 
int Exam::GetCountHours() 
{ 
	return _countHours;
} 
 
string Exam::GetDate() 
{ 
	return _date;
} 
int Exam::GetMark() 
{ 
	return _mark;
} 
 
void Exam::LecturerSurname()
{
	cout << " This exam directed lecturer "<< GetLecturerSurname() << endl;
} 
 
void Exam::StudentSurname()
{
	cout << " This exam passed student "<< GetStudentSurname()<< endl;
} 
 
void Exam::EnterExam()
{
	SetGroup();
	SetStudentSurname(); 
	SetLecturerSurname(); 
	SetPosition();
	SetSubject();
	SetCountHours();
	SetDate(); 
	SetMark();
} 
 
void Exam::ShowExam() 
{  
	cout << "Exam from subject: " << GetSubject() << endl;
	StudentSurname(); 
	cout << "From group: " << GetGroup() << endl; 
	LecturerSurname();  
	cout << "With position: " << GetPosition() << endl;  
	cout << "Count hours for styding subject: " << GetCountHours() << endl; 
	cout << "The date of the exam: " << GetDate() << endl; 
	cout << "Mark: " << GetMark() << endl; 
	cout << "||===============================|| " << endl;
} 
 
void Exam::ShowExamResult()
{ 
	cout << "On exam from subject: " << GetSubject() << endl;
	StudentSurname();
	cout << "From group: " << GetGroup() << ", got mark: " << GetMark() << endl; 
	cout << "||===============================|| " << endl;
} 
 

string Exam::GetCurrentDateTime() {
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
	return buf;
} 

Exam::~Exam()
{ 
	OutputDebugString(L"Exam destructor worked");
}
