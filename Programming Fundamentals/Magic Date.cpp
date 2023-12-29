//The date June 10, 1960 is special because when we write it in the following format, the month times the day equals the year. 6 / 10 / 60 
//Write a program that asks the user to enter a month(in numeric form), a day, and a two - digit year.The program should then determine 
//whether the month times the day is equal to the year.If so, it should display a message saying the date is magic.Otherwise it should 
//display a message saying the date is not magic.

#include <iostream>
using namespace std;

int main()
{
	cout << "---------------------------------------------------------" << endl;
	char* date=new char[50];
	cout << "Enter Date: ";
	cin >> date;
	cout << "---------------------------------------------------------" << endl;
	int count = 0;
	
	for (int i = 0; date[i] != '\0'; i++)
	{
		count++;
	}
	date[count + 1] = '\0';
	int day = 0;
	int month=0;
	int year=0;
	int loc = 0;
	for (int i = 0; date[i] != '\0'; i++)
	{
		if (date[i]!='-')
		{
			if (date[i] >= '0' && date[i] <= '9')
			{
				day = day * 10 + (date[i] - '0');
			}
		}
		else
		{
			loc = i;
			break;
		}
	}
	for (int i = loc+1; date[i] != '\0'; i++)
	{
		if (date[i] != '-')
		{
			if (date[i] >= '0' && date[i] <= '9')
			{
				month = month * 10 + (date[i] - '0');
			}
		}
		else
		{
			loc = i;
			break;
		}
	}
	for (int i = loc; date[i] != '\0'; i++)
	{
		if (date[i] != '\0')
		{
			if (date[i] >= '0' && date[i] <= '9')
			{
				year = year * 10 + (date[i] - '0');
			}
		}
	}

	cout << "---------------------------------------------------------" << endl;
	int qoutient = year % 100;
	if (qoutient == month * day)
	{
		cout << "Magic!" << endl;
	}
	else
	{
		cout << "Not Magic!" << endl;
	}
	cout << "---------------------------------------------------------" << endl;
}