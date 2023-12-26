//Introduing dependent Nested Loops and Shape Printing
#include <iostream>
using namespace std;

int main()
{
    // Outer loop to iterate from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Inner loop to iterate from 1 to 10 for each iteration of the outer loop
        for (int j = 1; j <= i; j++)
        {
            cout << "*" << " "; // Output * i times
        }

        cout << endl; // Output a newline after printing each set of numbers from 1 to 10
    }
}
