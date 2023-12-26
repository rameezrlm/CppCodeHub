/*
C++  program to print
1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
*/

#include <iostream>
using namespace std;

int main() {
    int rows = 4;
    int cols = 5;
    int count = 1;

    for (int i = 0; i < rows; i++) 
	{
        if (i % 2 == 0) 
		{
            for (int j = 0; j < cols; j++) 
			{
                cout << count << " ";
                count++;
            }
        }
		else 
		{
            int temp = count + cols - 1;
            for (int j = 0; j < cols; j++) 
			{
                cout << temp << " ";
                temp--;
            }
            count += cols;
        }
        cout << endl;
    }

    return 0;
}
