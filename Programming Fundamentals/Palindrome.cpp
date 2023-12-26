#include <iostream>
using namespace std;


void InputArray(char** arr, int size);// Function to take input for the array of words
bool Is_Palindrome(char* arr);// Function to check if a given word is a palindrome
bool Compare(char* arr, char* arr1);// Function to compare two character arrays (case-insensitive)                             
int GetLength(char* arr);// Function to get the length of a character array

int main()
{
    // Display header for Palindrome Detector
    cout << "*********************************************" << endl;
    cout << "             Palindrome Detector             " << endl;
    cout << "*********************************************" << endl;

    int size = 0;
    cout << "How Many Words you want to enter: ";
    cin >> size;
    cin.ignore();

    // Allocate memory for an array of character pointers
    char** arr = new char* [size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new char[50] {}; // Initialize each element to an array of characters
    }

    int count = 0;
    InputArray(arr, size); // Take input for the array of words

    // Check for palindromes in the entered words
    for (int i = 0; i < size; i++)
    {
        if (Is_Palindrome(arr[i]))
        {
            count++;
            break;
        }
    }

    // Display palindromes if found, else notify no palindromes entered
    if (count != 0)
    {
        cout << "\t\tPALINDROMES " << endl;
        cout << "*********************************************" << endl;
        for (int i = 0; i < size; i++) 
        {
            if (Is_Palindrome(arr[i])) 
            {
                cout << "\t\t" << arr[i] << endl;
            }
        }
        cout << "*********************************************" << endl;
    }
    else
    {
        cout << "You haven't Enter Any Palindrome" << endl;
    }

    // Deallocate memory
    for (int i = 0; i < size; i++)
    {
        delete[] arr[i]; // Delete individual character arrays
    }
    delete[] arr; // Delete the array of pointers
    arr = nullptr;
}
void InputArray(char** arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Word: ";
        cin.getline(arr[i], 50);
    }
}
bool Compare(char* arr, char* arr1)
{
    int l1 = GetLength(arr);
    int l2 = GetLength(arr1);
    if (l1 != l2)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < l1; i++)
        {
            if (arr[i] != arr1[i] && arr[i] != arr1[i] + 32 && arr[i] != arr1[i] - 32)
            {
                return false;
            }
        }
        return true;
    }
}
bool Is_Palindrome(char* arr)
{
    int length = GetLength(arr);
    char* arr1 = new char[length] {};
    int index = length - 1;
    for (int i = 0; i < length; i++)
    {
        arr1[i] = arr[index];
        index--;
    }
    arr1[length] = '\0';
    if (Compare(arr, arr1))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int GetLength(char* arr)
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}