#include "train.h"
#include <iostream>
using namespace std;

Train::Train()
{
	cout << "Default Constructor Called" << endl;
}
Train::Train(int s, int d, char* clr ,int size)
{
	cout << "Constructor Called";
	numbersofseats = s;
	numberofdoors = d;
	color = new char[size];
	color = clr;
}

void Train::setNumberofseat(int s)
{
	numbersofseats = s;
}
void Train::setnumberofdoors(int d)
{
	numberofdoors = d;
}
void Train::setcolor(char* c)
{
	color = c;
}

int Train::getNumberofseat()
{
	return numbersofseats;
}
int Train::getnumberofdoors()
{
	return numberofdoors;
}
char* Train::getcolor()
{
	return color;
}
Train::~Train()
{
	cout << "Destructor is Called:";
	delete[] color;
	color = nullptr;
}
