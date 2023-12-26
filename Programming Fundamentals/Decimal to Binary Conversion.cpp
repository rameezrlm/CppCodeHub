/*------------------------------------------------------------------------------
                   Decimal to Binary Conversion
--------------------------------------------------------------------------------*/
#include <iostream>
using namespace std;

// Function declaration: To be defined later in the code
int* regrow(int*, int, int);

int main()
{
    // Constants
    const int binaryBase = 2; // Represents the base for binary conversion

    // User Interface
    cout << "------------------------------------------" << endl;
    cout << "    I will tell u the Binary Of A Number  " << endl;
    cout << "------------------------------------------" << endl;

    // Variable Initialization
    int num = 0; // User input number
    int size = 0; // Size of the array
    int* Binary=nullptr; // Dynamic array to store binary digits

    // User Input
    do {
        cout << "Enter a non-negative number: ";
        cin >> num;
        if (num < 0) {
            cout << "Please re-enter a non-negative number." << endl;
        }
    } while (num < 0);

    // Binary Conversion
    while (num > 0)
    {
        int Remainder = num % binaryBase; // Calculate remainder for binary conversion
        num = num / binaryBase; // Update num for next iteration
        Binary = regrow(Binary, size, Remainder); // Store the remainder in the array
        size++; // Increment size for the new digit
    }

    // Output Binary Representation
    cout << "------------------------------------------" << endl;
    cout << "Binary is: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << Binary[i]; // Print the binary digits in reverse order
    }
    cout << "\n------------------------------------------" << endl;

    // Memory Cleanup
    delete[] Binary; // Free allocated memory
    Binary = nullptr; // Avoid dangling pointer

    // End of the main function
}

// Function to dynamically resize the array and add a new element
int* regrow(int* arr, int size, int num)
{
    int* newarr = new int[size + 1]; // Create a new array with increased size
    for (int i = 0; i < size; i++)
    {
        newarr[i] = arr[i]; // Copy elements from the old array to the new array
    }
    delete[] arr; // Free memory occupied by the old array
    newarr[size] = num; // Add the new element to the resized array
    return newarr; // Return the resized array
}
