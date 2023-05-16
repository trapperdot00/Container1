#include "Container.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::to_string;

void print(const Container& con)
{
    cout << "Elements: ";
    string fullPrint;
    for (int u = 0; u != con.length(); ++u) {
        fullPrint += to_string(con.getCValueAt(u)) + " ";
    }
    cout << fullPrint << "\n" << endl;
}

unsigned getSize()
{
    cout << "Enter size of container: ";
    unsigned sz;
    cin >> sz;
    return sz;
}

int main()
{
    unsigned ctrSize = getSize();
    Container ctr(ctrSize);
    print(ctr);
    int index, newVal;
    bool goodInput = true;;
    while (goodInput)
    {
        cout << "Enter index of value you want to change, " <<
                "then enter the new value: ";
        if (!(cin >> index) || !(cin >> newVal))
            goodInput = false;
        else {
            ctr.getValueAt(index) = newVal;
            print(ctr);
        }
    }
    return 0;
}
