// Gradebook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>  
#include <conio.h> 
#include "GeneralGradeBook.h"
using namespace std;

int main()
{ 
	int number = 0;
	int choose;
	string choice = "y";
	int size = 1;
	cout << " Input count of exams :" << endl;
	cin >> size;
	cout << " Enter index of month : \n";
	GeneralGradeBook gradeBook(size);
	while (choice == "y")
	{
		cout << " 1 - Input exams" << endl;
		cout << " 2 - Show exam by one " << endl; 
		cout << " 3 - Show examination result by one " << endl;
		cout << " 4 - Show all examination results " << endl;
		cout << " 5 - Get all exams data" << endl;
		cout << "Your choice: "; cin >> choose;
		cout << endl;
		switch (choose)
		{
		case 1:
			gradeBook.InputExams();
			break;
		case 2:
			cout << " Input index by exam:" << endl;
			cin >> number;
			gradeBook.operator[](number).ShowExam();
			break;
		case 3:
			cout << " Input index by exam:" << endl;
			cin >> number;
			gradeBook.operator[](number).ShowExamResult();
			break;
		case 4:
			gradeBook.GetExaminationrResults();
			break; 
		case 5:
			gradeBook.ShowGradeBook();
			break;
		default:
			break;
		}
		cout << "Press 'y' if you want to continue  "; cin >> choice;
	}
	_getch();
	return 0;
    return 0;
}

