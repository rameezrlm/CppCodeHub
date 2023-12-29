//Convert Binary to Decimal
#include <iostream>
using namespace std;
int Getlength(char* ar);

int main()
{
	char binary[40];
	cout << "Enter Binary: ";
	cin >> binary;

	int len = Getlength(binary)-1;
	int index = len;
	char* reverse = new char[index+2];
	for (int i = 0; binary[i] != '\0'; i++)
	{
		reverse[len] = binary[i];
		len--;
	}
	reverse[index+1] = '\0';
	cout << reverse << endl;
	int decimal = 0;
	int number = 1;
	for (int i = 0; reverse[i] != '\0'; i++)
	{
		if (reverse[i] == '1')
		{
			decimal = decimal + number;
		}
		number = number * 2;
	}
	cout << "Decimal is: " << decimal;
}
int Getlength(char* ar)
{
	int count = 0;
	for (int i = 0; ar[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}