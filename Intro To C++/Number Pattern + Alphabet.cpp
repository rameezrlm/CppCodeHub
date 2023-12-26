/*
C++ Program To Print
1
A A
2 2 2
B B B B
3 3 3 3 3

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
			}
			else
			{
				cout<<num<<" ";
			}
		}
		if(i%2==0)
		{
			ch++;
		}
		else
		{
			num++;
		}
		cout<<endl;
	}
}