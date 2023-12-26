/*
C++ Program To Print
1
A B
2 3 4
C D E F
5 6 7 8 9

*/
#include <iostream>
using namespace std;

int main ()
{
	char ch='A';
	int num=1;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				cout<<ch<<" ";
				ch++;
			}
			else
			{
				cout<<num<<" ";
				num++;
			}
		}
		cout<<endl;
	}
}