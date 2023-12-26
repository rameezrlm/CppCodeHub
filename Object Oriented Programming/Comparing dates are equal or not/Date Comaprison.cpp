#include <iostream>
#include "datecmp.h"
using namespace std;

int main()
{
	cout << "**********************************************" << endl;
	cout << "                  Rameez Ali                 " << endl;
	cout << "**********************************************" << endl;
	cout << "**********************************************" << endl;
	cout << "              L1F22BSCS0374                   " << endl;
	cout << "**********************************************" << endl;

	DateCmp obj;
	int d1, y1, m1;
	int d2, y2, m2;
	cout << "Enter Date: ";
	cin >> d1;
	cout << "Enter Month: ";
	cin >> m1;
	cout << "Enter Year: ";
	cin >> y1;
	obj.setdate1(d1);
	obj.setmonth1(m1);
	obj.setyear1(y1);
	cout << "Date Entered: " << d1 << " - " << m1 << " - " << y1 << endl;
	cout << "Enter Date: ";
	cin >> d2;
	cout << "Enter Month: ";
	cin >> m2;
	cout << "Enter Year: ";
	cin >> y2;
	obj.setdate2(d2);
	obj.setmonth2(m2);
	obj.setyear2(y2);
	cout << "Date Entered: " << d2 << " - " << m2 << " - " << y2 << endl;
	if (obj.compare(d1, d2, m1, m2, y1, y2))
	{
		cout << "**********************************************" << endl;
		cout << "                 Dates Are Equal              "  << endl;
		cout << "**********************************************" << endl;

	}
	else
	{
		cout << "**********************************************" << endl;
		cout << "                Dates are UnEqual             " << endl;
		cout << "**********************************************" << endl;
	}
}