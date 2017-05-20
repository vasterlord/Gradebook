#pragma once 
#include <iostream>
#include <string> 
#include <windows.h> 
#include "Exam.h" 
#include "Iterator.h"
using namespace std; 

class GeneralGradeBook
{  
private: 
	int _size; 
	Exam *exams;
public:
	GeneralGradeBook(); 
	GeneralGradeBook(int size); 
	 
	void GetExaminationrResults(); 
	 
	void ShowGradeBook(); 
	 
	void InputExams();

	Exam& operator[](int x);
	virtual ~GeneralGradeBook();
};

