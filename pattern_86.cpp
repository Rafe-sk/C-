// "Write a program to display the following pattern:

// 1234
// 123
// 12
// 1"
#include <iostream>

using namespace std;

int main()
{
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << j;
        }
        cout << "\n";
    }

    return 0;
}
