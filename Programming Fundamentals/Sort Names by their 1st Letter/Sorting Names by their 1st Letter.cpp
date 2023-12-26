//How It Works :
//  Reads names and marks from input.txt.
//  Sorts names alphabetically by their first letter.
//  Writes the sorted names and marks to output.txt

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	cout << "------------------------------------" << endl;
	cout << "Sorting Of Names By their 1st Letter" << endl;
	cout << "------------------------------------" << endl;
	char* Name = new char[30]; //Charactcer Array to Store Name Read from File 
	int* Marks = new int;        //As file format is -> Name Marks <- So to read marks an int type pointer
	ifstream fin;             //ifstream object to take input from file
	ofstream fout("output.txt");    //Ofstream object to generate a new file and output names sorted in alphabetical order
	if (!fout.is_open())
	{
		cout << "File Not Found!" << endl;
		return 1;
	}
	for (char letter = 'a'; letter <= 'z'; letter++) 
	{
		fin.open("input.txt");
		if (!fin.is_open())
		{
			cout << "File Not Found!" << endl;
			return 1;
		}
		else
		{
			while (fin >> Name)   //Read Name
			{
				fin >> *Marks;      //Read Marks
				if (Name[0] == letter || Name[0] == letter - 32)     //Check 1st letter of name
				{
					cout << Name << " " << *Marks << endl;
					fout << Name << " " << *Marks << endl;
				}
			}
			fin.close();
		}
	}
	fout.close();

	//DeAllocate memory to avoid memory leaks  
	delete[] Name;
	Name = nullptr;
	//Set pointer to Nullptr to avoid Dangling Pointers 
	delete Marks;
	Marks = nullptr;
}