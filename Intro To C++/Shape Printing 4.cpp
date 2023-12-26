/*
C++ Program to Print
********
 *******
  ******
   *****
    ****
     ***
      **
       *
*/
#include <iostream>
using namespace std;

int main ()
{
	int n=0;
	cout<<"Enter Number of Rows: ";
	cin>>n;
	int x=0;
	for(int i=n;i>=1;i--)
	{
		for(int k=1;k<=x;k++)
		{
			cout<<" ";
		}
		x++;
		for(int j=1;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}