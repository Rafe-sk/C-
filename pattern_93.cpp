// "Write a C++ program to display the following pattern:

// A
// B C
// D E F
// G H I J"

#include <iostream>

using namespace std;

int main()
{
    int rows;
    char currentChar = 'A';

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << currentChar << " ";
            ++currentChar;
        }
        cout << endl;
    }

    return 0;
}
