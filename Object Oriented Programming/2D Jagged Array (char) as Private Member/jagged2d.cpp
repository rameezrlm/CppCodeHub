#include <iostream>
#include "jagged2d.h"
using namespace std;

int University::getLength(char* arr)
{
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		count++;
	}
	return count+1;
}
void University::copy(char* arr1, char* arr2)
{
	int i = 0;
	for (i = 0; arr2[i] != '\0'; i++)
	{
		arr1[i] = arr2[i];
	}
	arr1[i] = '\0';
}
void University::display()
{
	cout << "Departments Offering: "<<endl;
	for (int i = 0; i < row; i++)
	{
		cout << department[i] << endl;
	}
}
University::~University()
{
	for (int i = 0; i < row; i++)
	{
		delete[] department[i];
	}
	delete[] department;
	department = nullptr;
	delete[] col;
	col = nullptr;
}
University::University(char** arr,int r,int* col)
{
	row = r;
	department = new char* [row];
	col = new int[row];
	for (int i = 0; i < row; i++)
	{
		department[i] = new char[getLength(arr[i])];
		copy(department[i], arr[i]);
		col[i] = getLength(arr[i]);
	}
}