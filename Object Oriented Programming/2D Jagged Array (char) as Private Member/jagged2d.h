#pragma once
class University
{
private:
	char** department;
	int row;
	int* col;
public:
	University(char**,int,int*);
	int getLength(char*);
	void copy(char*, char*);

	void display();
	~University();
};