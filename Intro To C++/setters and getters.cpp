#include <iostream>
using namespace std;

// Define a class named Wood
class Wood
{
private:
    // Private member variables to store length and width
    int length;
    int width;

public:
    // Public member function to set the length of the wood
    void setlength(int len)
    {
        length = len;
    }

    // Public member function to set the width of the wood
    void setwidth(int wid)
    {
        width = wid;
    }

    // Public member function to get the length of the wood
    int getlength()
    {
        return length;
    }

    // Public member function to get the width of the wood
    int getwidth()
    {
        return width;
    }
};

// The main function where the program execution starts
int main()
{
    // Create an object 'w' of class Wood
    Wood w;

    // Set the length and width of the wood object
    w.setlength(10);
    w.setwidth(20);

    // Display the length and width of the wood object
    cout << "Length is: " << w.getlength() << endl;
    cout << "Width is: " << w.getwidth() << endl;

    return 0; // Indicate successful completion of the program
}
