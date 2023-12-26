// Introducing Loops in C++

#include <iostream>
using namespace std;

int main()
{
    //Using For Loop
    // Loop to print numbers from 1 to 10
    cout << "For Loop: ";
    for (int i = 1; i <= 10; i++) // Initialize 'i' to 1, continue loop while 'i' is less than or equal to 10, increment 'i' by 1 after each iteration
    {
        cout << i << " "; // Output the value of 'i' followed by a space
    }
    cout << endl;
     //Using While Loop
    cout << "While Loop: ";
    int num = 1;
    while (num <= 10)
    {
        cout << num << " ";
        num++;
    }
    cout << endl;
    //Using Do While
    cout << "Do While Loop: ";
    int number = 1;
    do {
        cout << number << " ";
        number++;
    } 
    while (number <= 10);
    cout << endl;
    return 0; // Return 0 to indicate successful execution
}
