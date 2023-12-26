#include "student.h"
#include <iostream>
using namespace std;
void charcpy(char* copyInIt, char* copyFromIt);
int charlen(char* Ch);

int main()
{
	cout << "-------------------------------------------------------------" << endl;
	cout << "\t    University Management System" << endl;
	cout << "-------------------------------------------------------------" << endl;
	char* name = new char[50];
	cout << "Enter Name: ";
	cin.getline(name, 50);
	int age;
	cout << "Enter Age: ";
	cin >> age;
	char* gender = new char[20];
	cout << "Gender: ";
	cin >> gender;
	int CreditHours;
	cout << "Total Credit Hours Required for Degree Completion: ";
	cin >> CreditHours;
	float CGPA;
	cout << "Enter Your Current CGPA: ";
	cin >> CGPA;
	int row;
	cout << "Note: Courses Should Not More than 5" << endl;
	cout << "Enter Number Of Courses You Pick in this semester: ";
	do
	{
		cin >> row;
		if (row > 5 || row < 1)
		{
			cout << "Please Do not Exceed Limit only 1-5 Courses are allowed" << endl;
			cout << "Re-Input: ";
		}
	} while (row > 5 || row < 1);
	cin.ignore();
	char** grades = new char* [row];
	int* col = new int[row];
	char* subject = new char[50] {};
	for (int i = 0; i < row; i++)
	{
		cout << "Enter Your Subject " << i + 1 << " and its Grade : ";
		cin.getline(subject, 50);
		grades[i] = new char[charlen(subject)];
		charcpy(grades[i], subject);
		col[i] = charlen(subject);
	}
	Student s(name, age, gender, CreditHours, CGPA, grades, row, col);
	s.Display_Info();


	return 0;
}
void charcpy(char* copyInIt, char* copyFromIt)
{
	int i = 0;
	for (i = 0; copyFromIt[i] != '\0'; i++)
	{
		copyInIt[i] = copyFromIt[i];
	}
	copyInIt[i] = '\0';
}
int charlen(char* Ch)
{
	int length = 0;
	for (int i = 0; Ch[i] != '\0'; i++)
	{
		length++;
	}
	return length + 1;
}