#include <iostream>
#include "jagged2d.h"
using namespace std;
int getLength(char*);
void copy(char*, char*);

int main()
{
	cout << "---------------------------------------------------" << endl;
	cout << "                  Departments                      " << endl;
	cout << "--------------------------------------------------" << endl;
	int row = 0; 
	cout << "Enter Departments to Add: ";
	cin >> row;
	char** dept = new char*[row];
	char* temp = new char[30];
	int* col = new int[row];
	for (int i = 0; i < row; i++)
	{
		cout << "Enter Department " << i + 1 << ": ";
		cin >> temp;
		col[i] = getLength(temp);
		dept[i] = new char[col[i]];
		copy(dept[i], temp);
		
	}
	University ucp(dept,row,col);
	ucp.display();

	for (int i = 0; i < row; i++)
	{
		delete[] dept[i];
	}
	delete[] dept;
	dept = nullptr;
	delete[] col;
	col = nullptr;


	return 0;
}
int getLength(char* arr)
{
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		count++;
	}
	return count + 1;
}
void copy(char* arr1, char* arr2)
{
	int i = 0;
	for (i = 0; arr2[i] != '\0'; i++)
	{
		arr1[i] = arr2[i];
	}
	arr1[i] = '\0';
}