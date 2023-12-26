#pragma once
 

class DateCmp
{
private:
	int date1;
	int month1;
	int year1;

	int date2;
	int month2;
	int year2;
public:
	void setdate1(int d)
	{
		date1 = d;
	}
	void setdate2(int d)
	{
		date2 = d;
	}
	void setmonth1(int m)
	{
		month1 = m;
	}
	void setmonth2(int m)
	{
		month2 = m;
	}
	void setyear1(int y)
	{
		year1 = y;
	}
	void setyear2(int y)
	{
		year2 = y;
	}
	bool compare(int date1, int date2, int month1, int month2, int year1, int year2)
	{
		if (date1 == date2 && month1 == month2 && year1 == year2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};