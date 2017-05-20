#include "stdafx.h"
#include "GeneralGradeBook.h"
#include <iostream>
#include <string> 
#include <windows.h> 
#include "Exam.h" 
#include "Iterator.h"
using namespace std;

GeneralGradeBook::GeneralGradeBook()
{
} 
 
GeneralGradeBook::GeneralGradeBook(int size)
{ 
	try
	{
		if (size <= 0)
		{
			_size = 5;
			exams = new Exam[size];
			throw(" Size  can't less or equal 0! Size of calculate book setted by default to 5.");
		}
		else
		{
			_size = size;
			exams = new Exam[size];
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
}
void GeneralGradeBook::ShowGradeBook()
{ 
	Iterator iter = exams;

	for (int i = 0; i < _size; i++)
	{
		iter->ShowExam();
		++iter;
	}
}  
 
void GeneralGradeBook::GetExaminationrResults()
{
	Iterator iter = exams;

	for (int i = 0; i < _size; i++)
	{
		iter->ShowExamResult();
		++iter;
	}
}
 
Exam& GeneralGradeBook::operator[](int x)
{
	try
	{
		if (x < 0 || x > _size)
		{
			throw(" Incorrect index! ");  
		}
		else
		{
			return exams[x];
		}
	}
	catch (char *str)
	{
		cout << str << endl;
	}
	catch (std::exception ex) {
		cout << " Incorrect index! " << endl;
	}
}  
 
void GeneralGradeBook::InputExams()
{
	for (int i = 0; i < _size; i++)
	{
		cout << " Input data about exam number " << i << endl;
		Exam exam;
		exam.EnterExam();
		exams[i] = exam;
	}
	cout << " Input data about exam number ";
}

GeneralGradeBook::~GeneralGradeBook()
{ 
	OutputDebugString(L"GeneralGradeBook destructor worked");
	delete[] exams;
}
