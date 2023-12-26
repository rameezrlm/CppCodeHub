#include <iostream>
using namespace std;

int main()
{
    // Declaring an array named 'arr' of size 5 to hold integer values
    int arr[5];

    // Loop to take input for the array elements
    for (int i = 0; i < 5; i++)
    {
        // Prompting the user to enter values for the array elements
        cout << "Enter value for index " << i << " : ";
        // Taking input from the user and storing it in the array at index 'i'
        cin >> arr[i];
    }
    cout << endl;
    cout << "Array is: ";
    for (int j = 0; j < 5; j++)
    {
        // Outputting the array element at index 'j'
        cout << arr[j] << " ";
    }

    // Indicating successful termination of the program
    return 0;
}

