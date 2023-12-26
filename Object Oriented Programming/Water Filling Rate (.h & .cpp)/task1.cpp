#include <iostream>
#include "automobile.h"
using namespace std;

int main()
{
	swimming_pool ucp;
	cout << "-----------------------------------------------------------" << endl;
	cout << "            Rameez Ali - L1F22BSCS0374                     " << endl;
	cout << "-----------------------------------------------------------" << endl;
	cout << "***********************************************************" << endl;
	cout << "              Water Tank Filling Time Estimate             " << endl;
	cout << "***********************************************************" << endl;
	float len = 0.0, wid = 0.0, dep = 0.0, rat = 0.0;
	cout << "Enter Length: ";
	cin >> len;
	ucp.setlength(len);
	cout << "Enter Width: ";
	cin >> wid;
	ucp.setwidth(wid);
	cout << "Enter Depth: ";
	cin >> dep;
	ucp.setdepth(dep);
	cout << "Enter In Rate: ";
	cin >> rat;
	ucp.setrate(rat);
	float outrat;
	cout << "Enter Out Rate: ";
	cin >> outrat;
	cout << "Length is: " << ucp.getlength() << endl;
	cout << "Width is: " << ucp.getwidth() << endl;
	cout << "Depth is: " << ucp.getdepth() << endl;
	ucp.setvolume(len, wid, dep);
	int vol = ucp.getvolume1();
	cout << "Volume of Gallon is: " << vol << " Cubic Meter" << endl;
	cout << "Volume of Gallon is: " << ucp.amountofwater(vol) << " in Gallons per minute" << endl;
	float filled;
	cout << "Is gallon is filled partialyy if no enter 0 other wise enter amount? ";
	cin >> filled;
	vol = ucp.getvolume1() - filled / 60;
	float time = float(ucp.amountofwater(vol)) / 60;
	float require = time * ucp.getrate();
	cout << "***********************************************************" << endl;
	cout << "Requied Time to fill gallons is: " << require << " Minutes" << endl;
	cout << "Required Time to drain gallons is: " << require - outrat << " Minutes" << endl;
	cout << "***********************************************************" << endl;
	return 0;
}
