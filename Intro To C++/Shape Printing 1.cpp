/*
C++ Program to Print
* * * * *
* * * *
* * *
* *
*

*/

#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout<<"Enter Number of Rows: ";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
}