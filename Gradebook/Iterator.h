#pragma once 
#include <iostream>
#include <string> 
#include <windows.h> 
#include "Exam.h"
using namespace std;

class Iterator
{
public:
	Iterator(void);
	Iterator(Exam* ctr);
	~Iterator(void);
	Iterator(const Iterator& ctr);
	Iterator& operator = (const Exam* ctr);


	Iterator& operator += (const int& ctr);
	Iterator& operator -= (const int& ctr);
	Exam& operator * (void);
	Exam* operator -> (void);
	Exam& operator [] (const int& ctr);

	Iterator& operator ++ (void);
	Iterator operator ++ (int);
	Iterator& operator -- (void);
	Iterator operator -- (int);


	bool operator == (const Iterator& rhs);
	bool operator != (const Iterator& rhs);
	bool operator > (const Iterator& rhs);
	bool operator < (const Iterator& rhs);
	bool operator >= (const Iterator& rhs);
	bool operator <= (const Iterator& rhs);

protected:
	Exam* _ctr;
};

