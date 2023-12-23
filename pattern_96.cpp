// "Create a C++ program to print the following pattern:

//     1
//    121
//   12321
//  1234321
// 123454321"

#include <iostream>

using namespace std;

int main()
{
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            cout << " ";
        }

        // Print increasing numbers
        for (int k = 1; k <= i; ++k)
        {
            cout << k;
        }

        // Print decreasing numbers
        for (int l = i - 1; l >= 1; --l)
        {
            cout << l;
        }

        cout << endl;
    }

    return 0;
}
