#include <iostream>
using namespace std;

// Function prototypes
void input(int*, int ); // Function to input values into the array
void copy(int* , int* , int ); // Function to copy elements from one array to another
int* regrow(int* , int , int); // Function to regrow the array by adding an element
void print(int*, int); // Function to print the elements of the array

int main()
{
	// Initializing variables
	int size = 0; 
	cout << "How many numbers you Want to Enter: ";
	cin >> size; // Initial size of the array
	int* arr = new int[size]; // Dynamic memory allocation for the array
	cout << "Enter Values: ";
	input(arr, size); // Input values into the array

	int num = 0;
	char ch;
	cout << "Do you want to add more Number: ";
	cin >> ch;
	if (ch == 'y' || ch == 'Y')
	{
		cout << "Enter More Number to Re grow Array: ";
		cin >> num;
		arr = regrow(arr, size, num); // Regrow the array by adding a new element
		size++; // Increment size after regrowing the array
		print(arr, size); // Print the updated array
	}

	cout << "\nGood Bye!!" << endl;

	delete[] arr; // Deallocate memory
	arr = nullptr; // Set the pointer to null for safety
}

// Function to regrow the array by adding an element
int* regrow(int* old_arr, int size, int num)
{
	int* new_arr = new int[size + 1]; // Create a new array with increased size
	copy(new_arr, old_arr, size); // Copy elements from the old array to the new array
	delete[] old_arr; // Deallocate memory of the old array
	new_arr[size] = num; // Add the new element to the end of the new array
	return new_arr; // Return the new array
}

// Function to copy elements from one array to another
void copy(int* new_arr, int* old_arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		new_arr[i] = old_arr[i]; // Copy each element from the old array to the new array
	}
}

// Function to input values into the array
void input(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i]; // Input values into the array
	}
}

// Function to print the elements of the array
void print(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " "; // Print each element of the array
	}
}
