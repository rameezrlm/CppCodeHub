//Introducing Data types in C++
#include <iostream> 
using namespace std;

int main()
{
    // Declare and Initialize variables to store input
    int number = 0;
    char ch = 'A';
    float decimal = 0.0;

    // Prompt user for input
    cout << "Enter A Number: ";
    cin >> number; // Take user input for an integer
    //>> Extraction Operator to Take Input From User, cin : console Input
    cout << "Enter A Character: ";
    cin >> ch; // Take user input for a character

    cout << "Enter A Floating Point Number: ";
    cin >> decimal; // Take user input for a float

    // Display the entered values
    cout << "Integer: " << number << endl; // Output the entered integer
    cout << "Character: " << ch << endl; // Output the entered character
    cout << "Float: " << decimal << endl; // Output the entered float

    return 0; // Return 0 to indicate successful execution
}
