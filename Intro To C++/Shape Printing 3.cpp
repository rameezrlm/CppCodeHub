/*
C++ Program To Print
        *
       **
      ***
     ****
    *****
   ******
  *******
 ********

*/
#include <iostream>
using namespace std;

int main ()
{
	int n=0;
	cout<<"Enter Number of Rows: ";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		for(int k=1;k<=i;k++)
		{
			cout<<" ";
		}
		for(int j=n;j>=i;j--)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}