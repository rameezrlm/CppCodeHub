#include <iostream>
#include "train.h"
using namespace std;

int main()
{
        char* color=new char[7]{"Orange"};
	Train obj1(10,20,color,7);
	cout << "Number of Seats: " << obj1.getNumberofseat() << endl;
	cout << "Number of Doors: " << obj1.getnumberofdoors() << endl;
	cout << "Color Name: " << obj1.getcolor() << endl;
}