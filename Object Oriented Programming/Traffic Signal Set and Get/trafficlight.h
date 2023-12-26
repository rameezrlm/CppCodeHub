#pragma once

#include <iostream>
using namespace std;

class signal
{
private:
    bool green;
    bool red;
    bool yellow;
public:

    void onall()
    {
        green = true;
        red = true;
        yellow = true;
        cout << "Green Signal: " << green << endl;
        cout << "Red Signal: " << red << endl;
        cout << "Yellow Signal: " << yellow << endl;
    }
    void offall()
    {
        green = false;
        red = false;
        yellow = false;
        cout << "Green Signal: " << green << endl;
        cout << "Red Signal: " << red << endl;
        cout << "Yellow Signal: " << yellow << endl;
    }

    void turnOnRed()
    {
        red = true;
        yellow = false;
        green = false;
        cout << "Green Signal: " << green << endl;
        cout << "Red Signal: " << red << endl;
        cout << "Yellow Signal: " << yellow << endl;
    }

    void turnOnYellow()
    {
        red = false;
        yellow = true;
        green = false;
        cout << "Green Signal: " << green << endl;
        cout << "Red Signal: " << red << endl;
        cout << "Yellow Signal: " << yellow << endl;
    }
    void turnOnGreen()
    {
        red = false;
        yellow = false;
        green = true;
        cout << "Green Signal: " << green << endl;
        cout << "Red Signal: " << red << endl;
        cout << "Yellow Signal: " << yellow << endl;
    }
};