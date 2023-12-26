/*
c++ Program to Print
***************
*             *
*             *
*             *
*             *
*             *
*             *
*             *
*             *
***************
*/
#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout<<"Enter Number of Rows: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n+5;j++)
		{
			if(i==1 || i==n || j==n+5 || j==1)
			{
				cout<<"*";
			}	
			else 
			{
				cout<<" ";
			}
		}
		
		cout<<endl;
	}
}