#include "Wood.h"
#include <iostream>

using namespace std;

int main()
{
    Wood w;
    int l, w1;
    cout << "Enter the value for length: ";
    cin >> l;
    cout << "Enter the value for width: ";
    cin >> w1;

    w.setLength(l);
    w.setWidth(w1);

    cout << "Entered length is " << w.getLength() <<" and width is " << w.getWidth() << endl;


    return 0;
}
