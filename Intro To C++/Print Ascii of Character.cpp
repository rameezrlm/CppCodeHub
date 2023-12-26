#include <iostream>
using namespace std;

int main()
{
	char n;
	for (int i = 1; i <= 5; i++)
	{
		cout << endl;
		cout << "Enter any symbol: ";
		cin >> n;
		cout << endl << "ASCII Value is " << int(n);
	}
}
